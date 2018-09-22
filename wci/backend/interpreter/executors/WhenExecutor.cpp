/**

 * <h1>WhenExecutor</h1>

 *

 * <p>Execute a WHEN statement.</p>

 *

 */

#include <vector>

#include "WhenExecutor.h"

#include "StatementExecutor.h"

#include "ExpressionExecutor.h"

#include "../../../Object.h"

#include "../../../intermediate/ICodeNode.h"

#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace backend { namespace interpreter { namespace executors {

using namespace std;

using namespace wci;

using namespace wci::backend::interpreter;

using namespace wci::intermediate;

using namespace wci::intermediate::icodeimpl;

WhenExecutor::WhenExecutor(Executor *parent)

    : StatementExecutor(parent)

{

}

Object WhenExecutor::execute(ICodeNode *node)

{

    // Get the When node's children.

    vector<ICodeNode *> children = node->get_children();

//    ICodeNode *expr_node = children[0];

//    ICodeNode *then_stmt_node = children[1];

//    ICodeNode *else_stmt_node = children.size() > 2 ? children[2] : nullptr;

    ExpressionExecutor expression_executor(this);

    StatementExecutor statement_executor(this);

    for (auto *when_branch : children){

        vector<ICodeNode *> when_branch_children = when_branch->get_children();

        // If when_branch_children.size() == 1...otherwise

        if (when_branch_children.size() == 1){

            auto *stmt_node = when_branch_children[0];

            statement_executor.execute(stmt_node);

            ++execution_count;  // count the execution of the statement

            break;

        }

        auto *expr_node = when_branch_children[0];

        auto *stmt_node = when_branch_children[1];

        Object data_value = expression_executor.execute(expr_node);

        if (cast(data_value, bool))

        {

            statement_executor.execute(stmt_node);

            ++execution_count;  // count execution of OTHERWISE STMT

            break;

        }

    }

    return Object();    // empty

}

}}}}  // namespace wci::backend::interpreter::executors
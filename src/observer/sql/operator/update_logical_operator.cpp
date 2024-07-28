#include "sql/operator/update_logical_operator.h"

UpdateLogicalOperator::UpdateLogicalOperator(Table *table, std::string attr_name, Value value)
    : table_(table), attr_name_(attr_name), value_(value)
{
}
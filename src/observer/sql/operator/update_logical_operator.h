#pragma once

#include "sql/operator/logical_operator.h"

class UpdateLogicalOperator : public LogicalOperator
{
public:
  UpdateLogicalOperator(Table *table, std::string attr_name, Value value);
  virtual ~UpdateLogicalOperator() = default;

  LogicalOperatorType type() const override
  {
    return LogicalOperatorType::UPDATE;
  }

  Table *table() const { return table_; }
  std::string attribute_name() const { return attr_name_; }
  const Value &value() const { return value_; }
  Value &value() { return value_; }

private:
  Table *table_ = nullptr;
  std::string attr_name_;
  Value value_;
};
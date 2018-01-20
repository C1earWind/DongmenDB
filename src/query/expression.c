//
// Created by Sam on 2018/1/17.
//

#include <stddef.h>
#include <stdio.h>
#include "expression.h"


void printExpression(Expression *expr) {
    printf("\n");
    while (expr != NULL) {
        printf("%s ", getExpressionDesc(expr));
        expr = expr->nextexpr;
    }
    printf("\n");
}

char *getExpressionDesc(Expression *expr) {
    switch (expr->opType) {
        case TOKEN_NOT:
            return "NOT";
        case TOKEN_AND:
            return "AND";
        case TOKEN_OR:
            return "OR";
        case TOKEN_PLUS:
            return "+";
        case TOKEN_MINUS:
            return "-";
        case TOKEN_MULTIPLY:
            return "*";
        case TOKEN_DIVIDE:
            return "/";
        case TOKEN_GT:
            return ">";
        case TOKEN_LT:
            return "<";
        case TOKEN_LE:
            return "<=";
        case TOKEN_GE:
            return ">=";
        case TOKEN_EQ:
            return "=";
        case TOKEN_NOT_EQUAL:
            return "!=";
        case TOKEN_COMMA:
            return ",";
        case TOKEN_ASSIGNMENT:
            return "=";
        case TOKEN_LIKE:
            return "LIKE";
        case TOKEN_IN:
            return "IN";
        case TOKEN_FUN:
            return "FUN";
        case TOKEN_WORD:
            return expr->term->id;
        default:
            return "UNKNOWN";
    }
};
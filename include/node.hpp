#pragma once

#include <cstdint>
#include <string>

/**
 * nodes
 * indicate a point on the wastewater system
 * node must have 3 components, x, y and ID
 * 
 * @condition sealed, leaking
 */

namespace util{

    class Node
    {
    private:
        std::string condition;
        uint32_t id;
        double x, y;
    public:
        Node(double X, double Y, uint32_t ID)
            : x(x), y(y), id(ID)
        {
            /* initial default condition */
            this->condition = "sealed";
        }
        void set_x (double& x) {this->x = x;}
        void set_y (double& y) {this->y = y;}
        void set_condition(std::string& cond) {condition = cond;}

        double get_x() const noexcept {return this->x;}
        double get_y() const noexcept {return this->y;}
        double get_id() const noexcept {return this->id;}
        std::string get_condition() const noexcept {return this->condition;}
    };
    
} // namespace util

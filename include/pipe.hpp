#pragma once

#include <cstdint>
#include <vector>
#include <string>
#include "node.hpp"

namespace util
{
    /**
     * pipes
     * Must have id, start, end, length, diameter
     * 
     * @param roughness affects head loss due to friction
     * @param slope affects gravitational flow in pipe
     * @param material e.g. PVC ,HDPE, concrete, cast iron
     * @param pn pn / (presure) rating 
     * @param temperature temp of water through pipe
     * @param hydraulic_radius hydraulic radius of a pipe
     */
    class Pipe
    {
    private:
        uint32_t id;
        double length;
        double roughness;
        double slope;
        double temperature;
        double pn;
        double hydraulic_radius;
        std::string material;
        std::vector<const Node*> connected_nodes;
        Node *start;
        Node *end;
    public:
        Pipe(/* args */) = default;
    };
    
} // namespace util

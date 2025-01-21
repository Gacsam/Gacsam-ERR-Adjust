#include "gacsam_main.hpp"

void gacsam::Initialise()
{
    // Loop through all EquipParamWeapon
    for (auto [id, row] :
        from::params::get_param<from::paramdef::EQUIP_PARAM_WEAPON_ST>(L"EquipParamWeapon")) {
        
        // Soporific Antspur ID
        if (id == 5041400) {
            row.behaviorVariationId = 504;
            row.spAtkcategory = 269;
        }
    }
}
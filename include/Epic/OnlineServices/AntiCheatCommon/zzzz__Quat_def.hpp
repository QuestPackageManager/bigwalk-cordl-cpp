#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/Quat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Quat)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct Quat;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::Quat);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::Quat, "Epic.OnlineServices.AntiCheatCommon", "Quat");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.Quat
struct CORDL_TYPE Quat {
public:
// Declarations
 __declspec(property(get=get_w, put=set_w)) float_t  w;

 __declspec(property(get=get_x, put=set_x)) float_t  x;

 __declspec(property(get=get_y, put=set_y)) float_t  y;

 __declspec(property(get=get_z, put=set_z)) float_t  z;

/// @brief Method get_w, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_w() ;

/// @brief Method get_x, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_x() ;

/// @brief Method get_y, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_y() ;

/// @brief Method get_z, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_z() ;

/// @brief Method set_w, addr 0x18051eac0, size 0x10, virtual false, abstract: false, final false
inline void set_w(float_t  value) ;

/// @brief Method set_x, addr 0x18051ead0, size 0x10, virtual false, abstract: false, final false
inline void set_x(float_t  value) ;

/// @brief Method set_y, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_y(float_t  value) ;

/// @brief Method set_z, addr 0x18051eaf0, size 0x10, virtual false, abstract: false, final false
inline void set_z(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Quat() ;

// Ctor Parameters [CppParam { name: "_w_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_x_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_y_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_z_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr Quat(float_t  _w_k__BackingField, float_t  _x_k__BackingField, float_t  _y_k__BackingField, float_t  _z_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <w>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _w_k__BackingField;

/// @brief Field <x>k__BackingField, offset: 0x4, size: 0x4, def value: None
 float_t  _x_k__BackingField;

/// @brief Field <y>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _y_k__BackingField;

/// @brief Field <z>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _z_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Quat, _w_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Quat, _x_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Quat, _y_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::Quat, _z_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::Quat) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon

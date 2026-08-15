#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/Rect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rect)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct Rect;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::Rect);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::Rect, "Epic.OnlineServices.UI", "Rect");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.Rect
struct CORDL_TYPE Rect {
public:
// Declarations
 __declspec(property(get=get_Height, put=set_Height)) uint32_t  Height;

 __declspec(property(get=get_Width, put=set_Width)) uint32_t  Width;

 __declspec(property(get=get_X, put=set_X)) int32_t  X;

 __declspec(property(get=get_Y, put=set_Y)) int32_t  Y;

/// @brief Method get_Height, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Height() ;

/// @brief Method get_Width, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Width() ;

/// @brief Method get_X, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_X() ;

/// @brief Method get_Y, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Y() ;

/// @brief Method set_Height, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_Height(uint32_t  value) ;

/// @brief Method set_Width, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Width(uint32_t  value) ;

/// @brief Method set_X, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_X(int32_t  value) ;

/// @brief Method set_Y, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_Y(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Rect() ;

// Ctor Parameters [CppParam { name: "_X_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Y_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Width_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Height_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Rect(int32_t  _X_k__BackingField, int32_t  _Y_k__BackingField, uint32_t  _Width_k__BackingField, uint32_t  _Height_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <X>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _X_k__BackingField;

/// @brief Field <Y>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _Y_k__BackingField;

/// @brief Field <Width>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _Width_k__BackingField;

/// @brief Field <Height>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _Height_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::Rect, _X_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::Rect, _Y_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::Rect, _Width_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::UI::Rect, _Height_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::Rect) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI

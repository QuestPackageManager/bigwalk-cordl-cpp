#pragma once
// IWYU pragma private; include "Rewired/MouseMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
CORDL_MODULE_EXPORT(MouseMapSaveData)
namespace Rewired {
class MouseMap;
}
namespace Rewired {
class Mouse;
}
// Forward declare root types
namespace Rewired {
class MouseMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::MouseMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::MouseMapSaveData*, "Rewired", "MouseMapSaveData");
// Dependencies Rewired.ControllerMapSaveData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.MouseMapSaveData
class CORDL_TYPE MouseMapSaveData : public ::Rewired::ControllerMapSaveData {
public:
// Declarations
 __declspec(property(get=get_keyboardMap)) ::Rewired::MouseMap*  keyboardMap;

static inline ::Rewired::MouseMapSaveData* New_ctor(::Rewired::Mouse*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181994ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Mouse*  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_keyboardMap, addr 0x181995450, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::MouseMap* get_keyboardMap() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseMapSaveData(MouseMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseMapSaveData(MouseMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::MouseMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired

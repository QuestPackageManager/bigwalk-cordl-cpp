#pragma once
// IWYU pragma private; include "Rewired/KeyboardMapSaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapSaveData_def.hpp"
CORDL_MODULE_EXPORT(KeyboardMapSaveData)
namespace Rewired {
class KeyboardMap;
}
namespace Rewired {
class Keyboard;
}
// Forward declare root types
namespace Rewired {
class KeyboardMapSaveData;
}
// Write type traits
MARK_REF_T(::Rewired::KeyboardMapSaveData*);
DEFINE_IL2CPP_CLASS(::Rewired::KeyboardMapSaveData*, "Rewired", "KeyboardMapSaveData");
// Dependencies Rewired.ControllerMapSaveData
namespace Rewired {
// Is value type: false
// CS Name: Rewired.KeyboardMapSaveData
class CORDL_TYPE KeyboardMapSaveData : public ::Rewired::ControllerMapSaveData {
public:
// Declarations
 __declspec(property(get=get_keyboardMap)) ::Rewired::KeyboardMap*  keyboardMap;

static inline ::Rewired::KeyboardMapSaveData* New_ctor(::Rewired::Keyboard*  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181994ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Keyboard*  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_keyboardMap, addr 0x1819953d0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::KeyboardMap* get_keyboardMap() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardMapSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardMapSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardMapSaveData(KeyboardMapSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardMapSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardMapSaveData(KeyboardMapSaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::KeyboardMapSaveData) == 0x28, "Size mismatch!");

} // namespace end def Rewired

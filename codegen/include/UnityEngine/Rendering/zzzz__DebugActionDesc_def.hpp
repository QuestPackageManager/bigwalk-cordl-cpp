#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionRepeatMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugActionDesc)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DebugActionDesc*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugActionDesc*, "UnityEngine.Rendering", "DebugActionDesc");
// Dependencies System.Object, UnityEngine.Rendering.DebugActionRepeatMode
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugActionDesc
class CORDL_TYPE DebugActionDesc : public ::System::Object {
public:
// Declarations
/// @brief Field axisTrigger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisTrigger, put=__cordl_internal_set_axisTrigger)) ::StringW  axisTrigger;

/// @brief Field buttonTriggerList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonTriggerList, put=__cordl_internal_set_buttonTriggerList)) ::System::Collections::Generic::List_1<::ArrayW<::StringW>>*  buttonTriggerList;

/// @brief Field keyTriggerList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyTriggerList, put=__cordl_internal_set_keyTriggerList)) ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::KeyCode>>*  keyTriggerList;

/// @brief Field repeatDelay, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatDelay, put=__cordl_internal_set_repeatDelay)) float_t  repeatDelay;

/// @brief Field repeatMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_repeatMode, put=__cordl_internal_set_repeatMode)) ::UnityEngine::Rendering::DebugActionRepeatMode  repeatMode;

static inline ::UnityEngine::Rendering::DebugActionDesc* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_axisTrigger() const;

constexpr ::StringW& __cordl_internal_get_axisTrigger() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::StringW>>* const& __cordl_internal_get_buttonTriggerList() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::StringW>>*& __cordl_internal_get_buttonTriggerList() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::KeyCode>>* const& __cordl_internal_get_keyTriggerList() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::KeyCode>>*& __cordl_internal_get_keyTriggerList() ;

constexpr float_t const& __cordl_internal_get_repeatDelay() const;

constexpr float_t& __cordl_internal_get_repeatDelay() ;

constexpr ::UnityEngine::Rendering::DebugActionRepeatMode const& __cordl_internal_get_repeatMode() const;

constexpr ::UnityEngine::Rendering::DebugActionRepeatMode& __cordl_internal_get_repeatMode() ;

constexpr void __cordl_internal_set_axisTrigger(::StringW  value) ;

constexpr void __cordl_internal_set_buttonTriggerList(::System::Collections::Generic::List_1<::ArrayW<::StringW>>*  value) ;

constexpr void __cordl_internal_set_keyTriggerList(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::KeyCode>>*  value) ;

constexpr void __cordl_internal_set_repeatDelay(float_t  value) ;

constexpr void __cordl_internal_set_repeatMode(::UnityEngine::Rendering::DebugActionRepeatMode  value) ;

/// @brief Method .ctor, addr 0x181fe66f0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugActionDesc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugActionDesc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugActionDesc(DebugActionDesc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugActionDesc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugActionDesc(DebugActionDesc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6789};

/// @brief Field axisTrigger, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___axisTrigger;

/// @brief Field buttonTriggerList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::StringW>>*  ___buttonTriggerList;

/// @brief Field keyTriggerList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::KeyCode>>*  ___keyTriggerList;

/// @brief Field repeatMode, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::Rendering::DebugActionRepeatMode  ___repeatMode;

/// @brief Field repeatDelay, offset: 0x2c, size: 0x4, def value: None
 float_t  ___repeatDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___axisTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___buttonTriggerList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___keyTriggerList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___repeatMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionDesc, ___repeatDelay) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugActionDesc) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering

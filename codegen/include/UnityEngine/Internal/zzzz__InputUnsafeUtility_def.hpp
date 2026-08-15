#pragma once
// IWYU pragma private; include "UnityEngine/Internal/InputUnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUnsafeUtility)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Internal {
class InputUnsafeUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Internal::InputUnsafeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Internal::InputUnsafeUtility*, "UnityEngine.Internal", "InputUnsafeUtility");
// Dependencies System.Object
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: UnityEngine.Internal.InputUnsafeUtility
class CORDL_TYPE InputUnsafeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetAxis, addr 0x1822eb930, size 0x110, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  axisName) ;

/// @brief Method GetAxisRaw, addr 0x1822eb800, size 0x110, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  axisName) ;

/// @brief Method GetAxisRaw_Injected, addr 0x1822eb7e0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxisRaw_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName) ;

/// @brief Method GetAxisRaw__Unmanaged, addr 0x1822eb7f0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxisRaw__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen) ;

/// @brief Method GetAxis_Injected, addr 0x1822eb910, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxis_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName) ;

/// @brief Method GetAxis__Unmanaged, addr 0x1822eb920, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAxis__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen) ;

/// @brief Method GetButton, addr 0x1822ebcc0, size 0x110, virtual false, abstract: false, final false
static inline bool GetButton(::StringW  buttonName) ;

/// @brief Method GetButtonDown, addr 0x1822eba60, size 0x110, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  buttonName) ;

/// @brief Method GetButtonDown_Injected, addr 0x1822eba40, size 0x10, virtual false, abstract: false, final false
static inline bool GetButtonDown_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName) ;

/// @brief Method GetButtonDown__Unmanaged, addr 0x1822eba50, size 0x10, virtual false, abstract: false, final false
static inline uint8_t GetButtonDown__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetButtonUp, addr 0x1822ebb90, size 0x110, virtual false, abstract: false, final false
static inline bool GetButtonUp(::StringW  buttonName) ;

/// @brief Method GetButtonUp_Injected, addr 0x1822ebb70, size 0x10, virtual false, abstract: false, final false
static inline bool GetButtonUp_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName) ;

/// @brief Method GetButtonUp__Unmanaged, addr 0x1822ebb80, size 0x10, virtual false, abstract: false, final false
static inline bool GetButtonUp__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetButton_Injected, addr 0x1822ebca0, size 0x10, virtual false, abstract: false, final false
static inline bool GetButton_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName) ;

/// @brief Method GetButton__Unmanaged, addr 0x1822ebcb0, size 0x10, virtual false, abstract: false, final false
static inline bool GetButton__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetKeyDownString__Unmanaged, addr 0x1822ebdd0, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyDownString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

/// @brief Method GetKeyString__Unmanaged, addr 0x1822ebde0, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

/// @brief Method GetKeyUpString__Unmanaged, addr 0x1822ebdf0, size 0x10, virtual false, abstract: false, final false
static inline bool GetKeyUpString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUnsafeUtility(InputUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUnsafeUtility(InputUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Internal::InputUnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Internal

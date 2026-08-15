#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/PlatformSpecific/StandaloneInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__VirtualInput_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StandaloneInput)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific {
class StandaloneInput;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput*, "Rowlan.UnityStandardAssets.CrossPlatformInput.PlatformSpecific", "StandaloneInput");
// Dependencies Rowlan.UnityStandardAssets.CrossPlatformInput.VirtualInput
namespace Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
class CORDL_TYPE StandaloneInput : public ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput {
public:
// Declarations
/// @brief Method GetAxis, addr 0x181abfb10, size 0x20, virtual true, abstract: false, final false
inline float_t GetAxis(::StringW  name, bool  raw) ;

/// @brief Method GetButton, addr 0x181abfb50, size 0x10, virtual true, abstract: false, final false
inline bool GetButton(::StringW  name) ;

/// @brief Method GetButtonDown, addr 0x181abfb30, size 0x10, virtual true, abstract: false, final false
inline bool GetButtonDown(::StringW  name) ;

/// @brief Method GetButtonUp, addr 0x181abfb40, size 0x10, virtual true, abstract: false, final false
inline bool GetButtonUp(::StringW  name) ;

/// @brief Method MousePosition, addr 0x181abfb60, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 MousePosition() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput* New_ctor() ;

/// @brief Method SetAxis, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetAxis(::StringW  name, float_t  value) ;

/// @brief Method SetAxisNegative, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetAxisNegative(::StringW  name) ;

/// @brief Method SetAxisPositive, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetAxisPositive(::StringW  name) ;

/// @brief Method SetAxisZero, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetAxisZero(::StringW  name) ;

/// @brief Method SetButtonDown, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetButtonDown(::StringW  name) ;

/// @brief Method SetButtonUp, addr 0x181abfb80, size 0x20, virtual true, abstract: false, final false
inline void SetButtonUp(::StringW  name) ;

/// @brief Method .ctor, addr 0x181abf500, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneInput(StandaloneInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneInput(StandaloneInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific

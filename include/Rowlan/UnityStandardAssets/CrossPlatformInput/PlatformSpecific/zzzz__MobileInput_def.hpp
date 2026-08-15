#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/PlatformSpecific/MobileInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__VirtualInput_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobileInput)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific {
class MobileInput;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput*, "Rowlan.UnityStandardAssets.CrossPlatformInput.PlatformSpecific", "MobileInput");
// Dependencies Rowlan.UnityStandardAssets.CrossPlatformInput.VirtualInput
namespace Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
class CORDL_TYPE MobileInput : public ::Rowlan::UnityStandardAssets::CrossPlatformInput::VirtualInput {
public:
// Declarations
/// @brief Method AddAxes, addr 0x181abed30, size 0x60, virtual false, abstract: false, final false
inline void AddAxes(::StringW  name) ;

/// @brief Method AddButton, addr 0x181abed90, size 0x180, virtual false, abstract: false, final false
inline void AddButton(::StringW  name) ;

/// @brief Method GetAxis, addr 0x181abef10, size 0xb0, virtual true, abstract: false, final false
inline float_t GetAxis(::StringW  name, bool  raw) ;

/// @brief Method GetButton, addr 0x181abf0c0, size 0x70, virtual true, abstract: false, final false
inline bool GetButton(::StringW  name) ;

/// @brief Method GetButtonDown, addr 0x181abefc0, size 0x80, virtual true, abstract: false, final false
inline bool GetButtonDown(::StringW  name) ;

/// @brief Method GetButtonUp, addr 0x181abf040, size 0x80, virtual true, abstract: false, final false
inline bool GetButtonUp(::StringW  name) ;

/// @brief Method MousePosition, addr 0x1802f80b0, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 MousePosition() ;

static inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput* New_ctor() ;

/// @brief Method SetAxis, addr 0x181abf340, size 0xc0, virtual true, abstract: false, final false
inline void SetAxis(::StringW  name, float_t  value) ;

/// @brief Method SetAxisNegative, addr 0x181abf130, size 0xb0, virtual true, abstract: false, final false
inline void SetAxisNegative(::StringW  name) ;

/// @brief Method SetAxisPositive, addr 0x181abf1e0, size 0xb0, virtual true, abstract: false, final false
inline void SetAxisPositive(::StringW  name) ;

/// @brief Method SetAxisZero, addr 0x181abf290, size 0xb0, virtual true, abstract: false, final false
inline void SetAxisZero(::StringW  name) ;

/// @brief Method SetButtonDown, addr 0x181abf400, size 0x80, virtual true, abstract: false, final false
inline void SetButtonDown(::StringW  name) ;

/// @brief Method SetButtonUp, addr 0x181abf480, size 0x80, virtual true, abstract: false, final false
inline void SetButtonUp(::StringW  name) ;

/// @brief Method .ctor, addr 0x181abf500, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MobileInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MobileInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MobileInput(MobileInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MobileInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MobileInput(MobileInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::MobileInput) == 0x38, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::CrossPlatformInput::PlatformSpecific

#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformInitOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomPlatformInitOptions)
namespace Rewired::Platforms::Custom {
class CustomInputSource;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformConfigVars;
}
namespace Rewired::Platforms::Custom {
class IHardwareJoystickMapCustomPlatformMapProvider;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformInitOptions;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformInitOptions*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformInitOptions*, "Rewired.Platforms.Custom", "CustomPlatformInitOptions");
// Dependencies System.Object
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformInitOptions
class CORDL_TYPE CustomPlatformInitOptions : public ::System::Object {
public:
// Declarations
/// @brief Field configVars, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_configVars, put=__cordl_internal_set_configVars)) ::Rewired::Platforms::Custom::CustomPlatformConfigVars*  configVars;

/// @brief Field hardwareJoystickMapCustomPlatformMapProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hardwareJoystickMapCustomPlatformMapProvider, put=__cordl_internal_set_hardwareJoystickMapCustomPlatformMapProvider)) ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*  hardwareJoystickMapCustomPlatformMapProvider;

/// @brief Field inputSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputSource, put=__cordl_internal_set_inputSource)) ::Rewired::Platforms::Custom::CustomInputSource*  inputSource;

/// @brief Field platformId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_platformId, put=__cordl_internal_set_platformId)) int32_t  platformId;

/// @brief Field platformIdentifierString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformIdentifierString, put=__cordl_internal_set_platformIdentifierString)) ::StringW  platformIdentifierString;

static inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* New_ctor() ;

static inline ::Rewired::Platforms::Custom::CustomPlatformInitOptions* New_ctor(::Rewired::Platforms::Custom::CustomPlatformInitOptions*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars* const& __cordl_internal_get_configVars() const;

constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars*& __cordl_internal_get_configVars() ;

constexpr ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider* const& __cordl_internal_get_hardwareJoystickMapCustomPlatformMapProvider() const;

constexpr ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*& __cordl_internal_get_hardwareJoystickMapCustomPlatformMapProvider() ;

constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& __cordl_internal_get_inputSource() const;

constexpr ::Rewired::Platforms::Custom::CustomInputSource*& __cordl_internal_get_inputSource() ;

constexpr int32_t const& __cordl_internal_get_platformId() const;

constexpr int32_t& __cordl_internal_get_platformId() ;

constexpr ::StringW const& __cordl_internal_get_platformIdentifierString() const;

constexpr ::StringW& __cordl_internal_get_platformIdentifierString() ;

constexpr void __cordl_internal_set_configVars(::Rewired::Platforms::Custom::CustomPlatformConfigVars*  value) ;

constexpr void __cordl_internal_set_hardwareJoystickMapCustomPlatformMapProvider(::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*  value) ;

constexpr void __cordl_internal_set_inputSource(::Rewired::Platforms::Custom::CustomInputSource*  value) ;

constexpr void __cordl_internal_set_platformId(int32_t  value) ;

constexpr void __cordl_internal_set_platformIdentifierString(::StringW  value) ;

/// @brief Method .ctor, addr 0x18187ec70, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18187ecb0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomPlatformInitOptions*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformInitOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInitOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformInitOptions(CustomPlatformInitOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformInitOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformInitOptions(CustomPlatformInitOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2294};

/// @brief Field wVdcQgWViUbeGiEYtOhfODVsKOcJ offset 0xffffffff size 0x4
static constexpr int32_t  wVdcQgWViUbeGiEYtOhfODVsKOcJ{static_cast<int32_t>(0xffffffff)};

/// @brief Field platformId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___platformId;

/// @brief Field platformIdentifierString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___platformIdentifierString;

/// @brief Field inputSource, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomInputSource*  ___inputSource;

/// @brief Field hardwareJoystickMapCustomPlatformMapProvider, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::IHardwareJoystickMapCustomPlatformMapProvider*  ___hardwareJoystickMapCustomPlatformMapProvider;

/// @brief Field configVars, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomPlatformConfigVars*  ___configVars;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInitOptions, ___platformId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInitOptions, ___platformIdentifierString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInitOptions, ___inputSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInitOptions, ___hardwareJoystickMapCustomPlatformMapProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformInitOptions, ___configVars) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformInitOptions) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom

#pragma once
// IWYU pragma private; include "Rewired/Platforms/XboxOne/IXboxOneInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IXboxOneInputSource)
namespace GlobalNamespace {
struct tHsESWDQOdxcIkhJvKlfiYcSCTyD;
}
namespace Rewired::Platforms::XboxOne {
struct XboxOneGamepadMotorType;
}
// Forward declare root types
namespace Rewired::Platforms::XboxOne {
class IXboxOneInputSource;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::XboxOne::IXboxOneInputSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XboxOne::IXboxOneInputSource*, "Rewired.Platforms.XboxOne", "IXboxOneInputSource");
// Dependencies 
namespace Rewired::Platforms::XboxOne {
// Is value type: false
// CS Name: Rewired.Platforms.XboxOne.IXboxOneInputSource
class CORDL_TYPE IXboxOneInputSource {
public:
// Declarations
/// @brief Method GetXboxOneUserIdFromUnityJoystick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetXboxOneUserIdFromUnityJoystick(int32_t  unityJoystickId) ;

/// @brief Method PulseVibrateMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PulseVibrateMotor(uint64_t  xboxOneJoystickId, ::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType  motor, float_t  startLevel, float_t  endLevel, float_t  duration) ;

/// @brief Method SetXboxOneVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SetXboxOneVibration(uint64_t  xboxOneJoystickId, ::GlobalNamespace::tHsESWDQOdxcIkhJvKlfiYcSCTyD  vibration) ;

// Ctor Parameters [CppParam { name: "", ty: "IXboxOneInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXboxOneInputSource(IXboxOneInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Platforms::XboxOne

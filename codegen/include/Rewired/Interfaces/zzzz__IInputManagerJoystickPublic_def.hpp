#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IInputManagerJoystickPublic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IInputManagerJoystickPublic)
namespace Rewired {
class Controller_Extension;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IInputManagerJoystickPublic*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IInputManagerJoystickPublic*, "Rewired.Interfaces", "IInputManagerJoystickPublic");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IInputManagerJoystickPublic
class CORDL_TYPE IInputManagerJoystickPublic {
public:
// Declarations
 __declspec(property(get=get_extension)) ::Rewired::Controller_Extension*  extension;

 __declspec(property(get=get_inputManagerId)) int32_t  inputManagerId;

 __declspec(property(get=get_instanceGuid)) ::System::Guid  instanceGuid;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_persistentGuid)) ::System::Guid  persistentGuid;

 __declspec(property(get=get_rewiredId)) int32_t  rewiredId;

 __declspec(property(get=get_systemId)) ::System::Nullable_1<int64_t>  systemId;

 __declspec(property(get=get_unityId)) int32_t  unityId;

/// @brief Method SetVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetVibration(float_t  amount, int32_t  motorIndex) ;

/// @brief Method StopVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopVibration() ;

/// @brief Method get_extension, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::Controller_Extension* get_extension() ;

/// @brief Method get_inputManagerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_inputManagerId() ;

/// @brief Method get_instanceGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_instanceGuid() ;

/// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_persistentGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Guid get_persistentGuid() ;

/// @brief Method get_rewiredId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_rewiredId() ;

/// @brief Method get_systemId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_systemId() ;

/// @brief Method get_unityId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_unityId() ;

// Ctor Parameters [CppParam { name: "", ty: "IInputManagerJoystickPublic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputManagerJoystickPublic(IInputManagerJoystickPublic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces

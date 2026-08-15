#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInputSource)
namespace Rewired {
struct UpdateLoopType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IInputSource;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IInputSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IInputSource*, "Rewired.Interfaces", "IInputSource");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IInputSource
class CORDL_TYPE IInputSource {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetJoysticks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TJoy>
inline ::System::Collections::Generic::IList_1<TJoy>* GetJoysticks() ;

/// @brief Method SystemDeviceConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SystemDeviceConnected() ;

/// @brief Method SystemDeviceDisconnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SystemDeviceDisconnected() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDevices, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateDevices(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateFinished, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateFinished() ;

/// @brief Method add_DeviceChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_DeviceChangedEvent(::System::Action*  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_DeviceChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_DeviceChangedEvent(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputSource(IInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces

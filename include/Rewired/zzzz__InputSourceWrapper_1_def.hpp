#pragma once
// IWYU pragma private; include "Rewired/InputSourceWrapper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputSourceWrapper_1)
namespace Rewired::Interfaces {
class IInputSource;
}
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
namespace Rewired {
template<typename T>
class InputSourceWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::InputSourceWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::InputSourceWrapper_1, "Rewired", "InputSourceWrapper`1");
// Dependencies System.Object
namespace Rewired {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.InputSourceWrapper`1<T>
class CORDL_TYPE InputSourceWrapper_1 : public ::System::Object {
public:
// Declarations
/// @brief Field AwmlGpPLlxhNkAJHiFvTdPlZTzoL, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AwmlGpPLlxhNkAJHiFvTdPlZTzoL, put=__cordl_internal_set_AwmlGpPLlxhNkAJHiFvTdPlZTzoL)) T  AwmlGpPLlxhNkAJHiFvTdPlZTzoL;

/// @brief Field qOppAezfvkCHiiAysmWTLcYdtxrU, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_qOppAezfvkCHiiAysmWTLcYdtxrU, put=__cordl_internal_set_qOppAezfvkCHiiAysmWTLcYdtxrU)) bool  qOppAezfvkCHiiAysmWTLcYdtxrU;

 __declspec(property(get=get_source)) T  source;

/// @brief Convert operator to "::Rewired::Interfaces::IInputSource"
constexpr operator  ::Rewired::Interfaces::IInputSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetJoysticks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TJoy>
inline ::System::Collections::Generic::IList_1<TJoy>* GetJoysticks() ;

static inline ::Rewired::InputSourceWrapper_1<T>* New_ctor(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SystemDeviceConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SystemDeviceConnected() ;

/// @brief Method SystemDeviceDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SystemDeviceDisconnected() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Update() ;

/// @brief Method UpdateDevices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateDevices(::Rewired::UpdateLoopType  updateLoop) ;

/// @brief Method UpdateFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateFinished() ;

constexpr T const& __cordl_internal_get_AwmlGpPLlxhNkAJHiFvTdPlZTzoL() const;

constexpr T& __cordl_internal_get_AwmlGpPLlxhNkAJHiFvTdPlZTzoL() ;

constexpr bool const& __cordl_internal_get_qOppAezfvkCHiiAysmWTLcYdtxrU() const;

constexpr bool& __cordl_internal_get_qOppAezfvkCHiiAysmWTLcYdtxrU() ;

constexpr void __cordl_internal_set_AwmlGpPLlxhNkAJHiFvTdPlZTzoL(T  value) ;

constexpr void __cordl_internal_set_qOppAezfvkCHiiAysmWTLcYdtxrU(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_DeviceChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_DeviceChangedEvent(::System::Action*  value) ;

/// @brief Method get_source, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_source() ;

/// @brief Convert to "::Rewired::Interfaces::IInputSource"
constexpr ::Rewired::Interfaces::IInputSource* i___Rewired__Interfaces__IInputSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_DeviceChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_DeviceChangedEvent(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSourceWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSourceWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSourceWrapper_1(InputSourceWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSourceWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSourceWrapper_1(InputSourceWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1793};

/// @brief Field AwmlGpPLlxhNkAJHiFvTdPlZTzoL, offset: 0x10, size: 0x8, def value: None
 T  ___AwmlGpPLlxhNkAJHiFvTdPlZTzoL;

/// @brief Field qOppAezfvkCHiiAysmWTLcYdtxrU, offset: 0x18, size: 0x1, def value: None
 bool  ___qOppAezfvkCHiiAysmWTLcYdtxrU;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired

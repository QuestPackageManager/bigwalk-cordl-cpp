#pragma once
// IWYU pragma private; include "Steamworks/Callback_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__Callback_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(Callback_1)
namespace Steamworks {
template<typename T>
class Callback_1_DispatchDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
template<typename T>
class Callback_1_DispatchDelegate;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Steamworks::Callback_1);
MARK_GEN_REF_T_PTR(::Steamworks::Callback_1_DispatchDelegate);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Steamworks::Callback_1, "Steamworks", "Callback`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Steamworks::Callback_1_DispatchDelegate, "Steamworks", "Callback`1/DispatchDelegate");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Steamworks.Callback`1/DispatchDelegate<T>
class CORDL_TYPE Callback_1_DispatchDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  param, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  param) ;

static inline ::Steamworks::Callback_1_DispatchDelegate<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Callback_1_DispatchDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Callback_1_DispatchDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Callback_1_DispatchDelegate(Callback_1_DispatchDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callback_1_DispatchDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callback_1_DispatchDelegate(Callback_1_DispatchDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Steamworks
// Dependencies Steamworks.Callback
namespace Steamworks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Steamworks.Callback`1<T>
class CORDL_TYPE Callback_1 : public ::Steamworks::Callback {
public:
// Declarations
using DispatchDelegate = ::Steamworks::Callback_1_DispatchDelegate<T>;

 __declspec(property(get=get_IsGameServer)) bool  IsGameServer;

/// @brief Field m_Func, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Func, put=__cordl_internal_set_m_Func)) ::Steamworks::Callback_1_DispatchDelegate<T>*  m_Func;

/// @brief Field m_bDisposed, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bDisposed, put=__cordl_internal_set_m_bDisposed)) bool  m_bDisposed;

/// @brief Field m_bGameServer, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bGameServer, put=__cordl_internal_set_m_bGameServer)) bool  m_bGameServer;

/// @brief Field m_bIsRegistered, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bIsRegistered, put=__cordl_internal_set_m_bIsRegistered)) bool  m_bIsRegistered;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Steamworks::Callback_1<T>* Create(::Steamworks::Callback_1_DispatchDelegate<T>*  func) ;

/// @brief Method CreateGameServer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Steamworks::Callback_1<T>* CreateGameServer(::Steamworks::Callback_1_DispatchDelegate<T>*  func) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetCallbackType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Type* GetCallbackType() ;

static inline ::Steamworks::Callback_1<T>* New_ctor(::Steamworks::Callback_1_DispatchDelegate<T>*  func, bool  bGameServer) ;

/// @brief Method OnRunCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRunCallback(::System::IntPtr  pvParam) ;

/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Register(::Steamworks::Callback_1_DispatchDelegate<T>*  func) ;

/// @brief Method SetUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUnregistered() ;

/// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Unregister() ;

constexpr ::Steamworks::Callback_1_DispatchDelegate<T>* const& __cordl_internal_get_m_Func() const;

constexpr ::Steamworks::Callback_1_DispatchDelegate<T>*& __cordl_internal_get_m_Func() ;

constexpr bool const& __cordl_internal_get_m_bDisposed() const;

constexpr bool& __cordl_internal_get_m_bDisposed() ;

constexpr bool const& __cordl_internal_get_m_bGameServer() const;

constexpr bool& __cordl_internal_get_m_bGameServer() ;

constexpr bool const& __cordl_internal_get_m_bIsRegistered() const;

constexpr bool& __cordl_internal_get_m_bIsRegistered() ;

constexpr void __cordl_internal_set_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value) ;

constexpr void __cordl_internal_set_m_bDisposed(bool  value) ;

constexpr void __cordl_internal_set_m_bGameServer(bool  value) ;

constexpr void __cordl_internal_set_m_bIsRegistered(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::Callback_1_DispatchDelegate<T>*  func, bool  bGameServer) ;

/// @brief Method add_m_Func, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value) ;

/// @brief Method get_IsGameServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsGameServer() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_m_Func, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_m_Func(::Steamworks::Callback_1_DispatchDelegate<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Callback_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Callback_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Callback_1(Callback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callback_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callback_1(Callback_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15976};

/// @brief Field m_Func, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::Callback_1_DispatchDelegate<T>*  ___m_Func;

/// @brief Field m_bGameServer, offset: 0x18, size: 0x1, def value: None
 bool  ___m_bGameServer;

/// @brief Field m_bIsRegistered, offset: 0x19, size: 0x1, def value: None
 bool  ___m_bIsRegistered;

/// @brief Field m_bDisposed, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_bDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Steamworks

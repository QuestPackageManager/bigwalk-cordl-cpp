#pragma once
// IWYU pragma private; include "Steamworks/CallResult_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CallResult_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallResult_1)
namespace Steamworks {
template<typename T>
class CallResult_1_APIDispatchDelegate;
}
namespace Steamworks {
struct SteamAPICall_t;
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
class CallResult_1;
}
namespace Steamworks {
template<typename T>
class CallResult_1_APIDispatchDelegate;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Steamworks::CallResult_1);
MARK_GEN_REF_T_PTR(::Steamworks::CallResult_1_APIDispatchDelegate);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Steamworks::CallResult_1, "Steamworks", "CallResult`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Steamworks::CallResult_1_APIDispatchDelegate, "Steamworks", "CallResult`1/APIDispatchDelegate");
// Dependencies System.MulticastDelegate
namespace Steamworks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Steamworks.CallResult`1/APIDispatchDelegate<T>
class CORDL_TYPE CallResult_1_APIDispatchDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  param, bool  bIOFailure, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  param, bool  bIOFailure) ;

static inline ::Steamworks::CallResult_1_APIDispatchDelegate<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallResult_1_APIDispatchDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallResult_1_APIDispatchDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallResult_1_APIDispatchDelegate(CallResult_1_APIDispatchDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallResult_1_APIDispatchDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallResult_1_APIDispatchDelegate(CallResult_1_APIDispatchDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Steamworks
// Dependencies Steamworks.CallResult, Steamworks.SteamAPICall_t
namespace Steamworks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Steamworks.CallResult`1<T>
class CORDL_TYPE CallResult_1 : public ::Steamworks::CallResult {
public:
// Declarations
using APIDispatchDelegate = ::Steamworks::CallResult_1_APIDispatchDelegate<T>;

 __declspec(property(get=get_Handle)) ::Steamworks::SteamAPICall_t  Handle;

/// @brief Field m_Func, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Func, put=__cordl_internal_set_m_Func)) ::Steamworks::CallResult_1_APIDispatchDelegate<T>*  m_Func;

/// @brief Field m_bDisposed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bDisposed, put=__cordl_internal_set_m_bDisposed)) bool  m_bDisposed;

/// @brief Field m_hAPICall, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_hAPICall, put=__cordl_internal_set_m_hAPICall)) ::Steamworks::SteamAPICall_t  m_hAPICall;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Steamworks::CallResult_1<T>* Create(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetCallbackType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Type* GetCallbackType() ;

/// @brief Method IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsActive() ;

static inline ::Steamworks::CallResult_1<T>* New_ctor(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func) ;

/// @brief Method OnRunCallResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRunCallResult(::System::IntPtr  pvParam, bool  bFailed, uint64_t  hSteamAPICall_) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Set(::Steamworks::SteamAPICall_t  hAPICall, ::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func) ;

/// @brief Method SetUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUnregistered() ;

constexpr ::Steamworks::CallResult_1_APIDispatchDelegate<T>* const& __cordl_internal_get_m_Func() const;

constexpr ::Steamworks::CallResult_1_APIDispatchDelegate<T>*& __cordl_internal_get_m_Func() ;

constexpr bool const& __cordl_internal_get_m_bDisposed() const;

constexpr bool& __cordl_internal_get_m_bDisposed() ;

constexpr ::Steamworks::SteamAPICall_t const& __cordl_internal_get_m_hAPICall() const;

constexpr ::Steamworks::SteamAPICall_t& __cordl_internal_get_m_hAPICall() ;

constexpr void __cordl_internal_set_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value) ;

constexpr void __cordl_internal_set_m_bDisposed(bool  value) ;

constexpr void __cordl_internal_set_m_hAPICall(::Steamworks::SteamAPICall_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  func) ;

/// @brief Method add_m_Func, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value) ;

/// @brief Method get_Handle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Steamworks::SteamAPICall_t get_Handle() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_m_Func, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_m_Func(::Steamworks::CallResult_1_APIDispatchDelegate<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallResult_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallResult_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallResult_1(CallResult_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallResult_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallResult_1(CallResult_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15979};

/// @brief Field m_Func, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CallResult_1_APIDispatchDelegate<T>*  ___m_Func;

/// @brief Field m_hAPICall, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::SteamAPICall_t  ___m_hAPICall;

/// @brief Field m_bDisposed, offset: 0x20, size: 0x1, def value: None
 bool  ___m_bDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Steamworks

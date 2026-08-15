#pragma once
// IWYU pragma private; include "Steamworks/CallbackDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackDispatcher)
namespace Steamworks {
class CallResult;
}
namespace Steamworks {
class Callback;
}
namespace Steamworks {
struct SteamAPICall_t;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Steamworks {
class CallbackDispatcher;
}
// Write type traits
MARK_REF_T(::Steamworks::CallbackDispatcher*);
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackDispatcher*, "Steamworks", "CallbackDispatcher");
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallbackDispatcher
class CORDL_TYPE CallbackDispatcher : public ::System::Object {
public:
// Declarations
/// @brief Field m_initCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_initCount, put=setStaticF_m_initCount)) int32_t  m_initCount;

/// @brief Field m_pCallbackMsg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pCallbackMsg, put=setStaticF_m_pCallbackMsg)) ::System::IntPtr  m_pCallbackMsg;

/// @brief Field m_registeredCallResults, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredCallResults, put=setStaticF_m_registeredCallResults)) ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*  m_registeredCallResults;

/// @brief Field m_registeredCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredCallbacks, put=setStaticF_m_registeredCallbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  m_registeredCallbacks;

/// @brief Field m_registeredGameServerCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_registeredGameServerCallbacks, put=setStaticF_m_registeredGameServerCallbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  m_registeredGameServerCallbacks;

/// @brief Field m_sync, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_sync, put=setStaticF_m_sync)) ::System::Object*  m_sync;

/// @brief Method ExceptionHandler, addr 0x18054ca10, size 0x10, virtual false, abstract: false, final false
static inline void ExceptionHandler(::System::Exception*  e) ;

/// @brief Method Initialize, addr 0x18054ca20, size 0x1e0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Register, addr 0x18054ce10, size 0x200, virtual false, abstract: false, final false
static inline void Register(::Steamworks::SteamAPICall_t  asyncCall, ::Steamworks::CallResult*  cr) ;

/// @brief Method Register, addr 0x18054cc00, size 0x210, virtual false, abstract: false, final false
static inline void Register(::Steamworks::Callback*  cb) ;

/// @brief Method RunFrame, addr 0x18054d010, size 0x8b0, virtual false, abstract: false, final false
static inline void RunFrame(bool  isGameServer) ;

/// @brief Method Shutdown, addr 0x18054d8c0, size 0x140, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method Unregister, addr 0x18054dec0, size 0x1a0, virtual false, abstract: false, final false
static inline void Unregister(::Steamworks::SteamAPICall_t  asyncCall, ::Steamworks::CallResult*  cr) ;

/// @brief Method Unregister, addr 0x18054e060, size 0x1b0, virtual false, abstract: false, final false
static inline void Unregister(::Steamworks::Callback*  cb) ;

/// @brief Method UnregisterAll, addr 0x18054da00, size 0x4c0, virtual false, abstract: false, final false
static inline void UnregisterAll() ;

static inline int32_t getStaticF_m_initCount() ;

static inline ::System::IntPtr getStaticF_m_pCallbackMsg() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>* getStaticF_m_registeredCallResults() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* getStaticF_m_registeredCallbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>* getStaticF_m_registeredGameServerCallbacks() ;

static inline ::System::Object* getStaticF_m_sync() ;

/// @brief Method get_IsInitialized, addr 0x18054e340, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

static inline void setStaticF_m_initCount(int32_t  value) ;

static inline void setStaticF_m_pCallbackMsg(::System::IntPtr  value) ;

static inline void setStaticF_m_registeredCallResults(::System::Collections::Generic::Dictionary_2<uint64_t,::System::Collections::Generic::List_1<::Steamworks::CallResult*>*>*  value) ;

static inline void setStaticF_m_registeredCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value) ;

static inline void setStaticF_m_registeredGameServerCallbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Steamworks::Callback*>*>*  value) ;

static inline void setStaticF_m_sync(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackDispatcher(CallbackDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackDispatcher(CallbackDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CallbackDispatcher) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

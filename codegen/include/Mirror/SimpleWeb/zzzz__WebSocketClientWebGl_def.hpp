#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketClientWebGl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketClientWebGl)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class WebSocketClientWebGl;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::WebSocketClientWebGl*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::WebSocketClientWebGl*, "Mirror.SimpleWeb", "WebSocketClientWebGl");
// Dependencies Mirror.SimpleWeb.SimpleWebClient
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.WebSocketClientWebGl
class CORDL_TYPE WebSocketClientWebGl : public ::Mirror::SimpleWeb::SimpleWebClient {
public:
// Declarations
/// @brief Field ConnectingSendQueue, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectingSendQueue, put=__cordl_internal_set_ConnectingSendQueue)) ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  ConnectingSendQueue;

/// @brief Field index, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instances, put=setStaticF_instances)) ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*  instances;

/// @brief Method CheckJsConnected, addr 0x181ad6b30, size 0x10, virtual false, abstract: false, final false
inline bool CheckJsConnected() ;

/// @brief Method CloseCallBack, addr 0x181ad6b40, size 0xf0, virtual false, abstract: false, final false
static inline void CloseCallBack(int32_t  index) ;

/// @brief Method Connect, addr 0x181ad6c30, size 0xf0, virtual true, abstract: false, final false
inline void Connect(::System::Uri*  serverAddress) ;

/// @brief Method Disconnect, addr 0x181ad6d20, size 0x20, virtual true, abstract: false, final false
inline void Disconnect() ;

/// @brief Method ErrorCallback, addr 0x181ad6d40, size 0x110, virtual false, abstract: false, final false
static inline void ErrorCallback(int32_t  index) ;

/// @brief Method MessageCallback, addr 0x181ad6e50, size 0x80, virtual false, abstract: false, final false
static inline void MessageCallback(int32_t  index, ::System::IntPtr  bufferPtr, int32_t  count) ;

static inline ::Mirror::SimpleWeb::WebSocketClientWebGl* New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick) ;

/// @brief Method OpenCallback, addr 0x181ad6ed0, size 0x110, virtual false, abstract: false, final false
static inline void OpenCallback(int32_t  index) ;

/// @brief Method Send, addr 0x181ad6fe0, size 0xe0, virtual true, abstract: false, final false
inline void Send(::System::ArraySegment_1<uint8_t>  segment) ;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_ConnectingSendQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*& __cordl_internal_get_ConnectingSendQueue() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_ConnectingSendQueue(::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x181ad7120, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>* getStaticF_instances() ;

/// @brief Method onClose, addr 0x181ad7140, size 0xa0, virtual false, abstract: false, final false
inline void onClose() ;

/// @brief Method onErr, addr 0x181ad71e0, size 0xc0, virtual false, abstract: false, final false
inline void onErr() ;

/// @brief Method onMessage, addr 0x181ad72a0, size 0x190, virtual false, abstract: false, final false
inline void onMessage(::System::IntPtr  bufferPtr, int32_t  count) ;

/// @brief Method onOpen, addr 0x181ad7430, size 0xd0, virtual false, abstract: false, final false
inline void onOpen() ;

static inline void setStaticF_instances(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketClientWebGl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientWebGl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketClientWebGl(WebSocketClientWebGl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketClientWebGl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketClientWebGl(WebSocketClientWebGl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20517};

/// @brief Field index, offset: 0x50, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field ConnectingSendQueue, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  ___ConnectingSendQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientWebGl, ___index) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::WebSocketClientWebGl, ___ConnectingSendQueue) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::WebSocketClientWebGl) == 0x60, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

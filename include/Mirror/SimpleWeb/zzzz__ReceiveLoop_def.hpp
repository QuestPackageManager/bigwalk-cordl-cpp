#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ReceiveLoop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiveLoop)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
class BufferPool;
}
namespace Mirror::SimpleWeb {
class Connection;
}
namespace Mirror::SimpleWeb {
struct Message;
}
namespace Mirror::SimpleWeb {
struct ReceiveLoop_Config;
}
namespace Mirror::SimpleWeb {
struct ReceiveLoop_Header;
}
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class ReceiveLoop;
}
namespace Mirror::SimpleWeb {
struct ReceiveLoop_Config;
}
namespace Mirror::SimpleWeb {
struct ReceiveLoop_Header;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::ReceiveLoop*);
MARK_VAL_T(::Mirror::SimpleWeb::ReceiveLoop_Config);
MARK_VAL_T(::Mirror::SimpleWeb::ReceiveLoop_Header);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReceiveLoop*, "Mirror.SimpleWeb", "ReceiveLoop");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReceiveLoop_Config, "Mirror.SimpleWeb", "ReceiveLoop/Config");
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::ReceiveLoop_Header, "Mirror.SimpleWeb", "ReceiveLoop/Header");
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.ReceiveLoop/Config
struct CORDL_TYPE ReceiveLoop_Config {
public:
// Declarations
/// @brief Method Deconstruct, addr 0x181ad0300, size 0x80, virtual false, abstract: false, final false
inline void Deconstruct(::by_ref<::Mirror::SimpleWeb::Connection*>  conn, ::by_ref<int32_t>  maxMessageSize, ::by_ref<bool>  expectMask, ::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>  queue, ::by_ref<::Mirror::SimpleWeb::BufferPool*>  bufferPool) ;

/// @brief Method .ctor, addr 0x181ad0380, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::Connection*  conn, int32_t  maxMessageSize, bool  expectMask, ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  queue, ::Mirror::SimpleWeb::BufferPool*  bufferPool) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceiveLoop_Config() ;

// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::SimpleWeb::Connection*", modifiers: "", def_value: None }, CppParam { name: "maxMessageSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "expectMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "queue", ty: "::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*", modifiers: "", def_value: None }, CppParam { name: "bufferPool", ty: "::Mirror::SimpleWeb::BufferPool*", modifiers: "", def_value: None }]
constexpr ReceiveLoop_Config(::Mirror::SimpleWeb::Connection*  conn, int32_t  maxMessageSize, bool  expectMask, ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  queue, ::Mirror::SimpleWeb::BufferPool*  bufferPool) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field conn, offset: 0x0, size: 0x8, def value: None
 ::Mirror::SimpleWeb::Connection*  conn;

/// @brief Field maxMessageSize, offset: 0x8, size: 0x4, def value: None
 int32_t  maxMessageSize;

/// @brief Field expectMask, offset: 0xc, size: 0x1, def value: None
 bool  expectMask;

/// @brief Field queue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  queue;

/// @brief Field bufferPool, offset: 0x18, size: 0x8, def value: None
 ::Mirror::SimpleWeb::BufferPool*  bufferPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Config, conn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Config, maxMessageSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Config, expectMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Config, queue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Config, bufferPool) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ReceiveLoop_Config) == 0x20, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies 
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.ReceiveLoop/Header
struct CORDL_TYPE ReceiveLoop_Header {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ReceiveLoop_Header() ;

// Ctor Parameters [CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "opcode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "finished", ty: "bool", modifiers: "", def_value: None }]
constexpr ReceiveLoop_Header(int32_t  payloadLength, int32_t  offset, int32_t  opcode, bool  finished) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field payloadLength, offset: 0x0, size: 0x4, def value: None
 int32_t  payloadLength;

/// @brief Field offset, offset: 0x4, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field opcode, offset: 0x8, size: 0x4, def value: None
 int32_t  opcode;

/// @brief Field finished, offset: 0xc, size: 0x1, def value: None
 bool  finished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Header, payloadLength) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Header, offset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Header, opcode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::ReceiveLoop_Header, finished) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::ReceiveLoop_Header) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.ReceiveLoop
class CORDL_TYPE ReceiveLoop : public ::System::Object {
public:
// Declarations
using Config = ::Mirror::SimpleWeb::ReceiveLoop_Config;

using Header = ::Mirror::SimpleWeb::ReceiveLoop_Header;

/// @brief Method CopyMessageToBuffer, addr 0x181ad2140, size 0x110, virtual false, abstract: false, final false
static inline ::Mirror::SimpleWeb::ArrayBuffer* CopyMessageToBuffer(::Mirror::SimpleWeb::BufferPool*  bufferPool, bool  expectMask, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength) ;

/// @brief Method GetCloseCode, addr 0x181ad2250, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetCloseCode(::ArrayW<uint8_t>  buffer, int32_t  msgOffset) ;

/// @brief Method GetCloseMessage, addr 0x181ad2280, size 0x60, virtual false, abstract: false, final false
static inline ::StringW GetCloseMessage(::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength) ;

/// @brief Method HandleArrayMessage, addr 0x181ad22e0, size 0x1e0, virtual false, abstract: false, final false
static inline void HandleArrayMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength) ;

/// @brief Method HandleCloseMessage, addr 0x181ad24c0, size 0xd0, virtual false, abstract: false, final false
static inline void HandleCloseMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength) ;

/// @brief Method Loop, addr 0x181ad2590, size 0x510, virtual false, abstract: false, final false
static inline void Loop(::Mirror::SimpleWeb::ReceiveLoop_Config  config) ;

/// @brief Method ReadHeader, addr 0x181ad2aa0, size 0x240, virtual false, abstract: false, final false
static inline ::Mirror::SimpleWeb::ReceiveLoop_Header ReadHeader(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, bool  opCodeContinuation) ;

/// @brief Method ReadOneMessage, addr 0x181ad2ce0, size 0x7a0, virtual false, abstract: false, final false
static inline void ReadOneMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReceiveLoop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReceiveLoop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReceiveLoop(ReceiveLoop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReceiveLoop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReceiveLoop(ReceiveLoop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::ReceiveLoop) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

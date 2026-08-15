#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Message.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/SimpleWeb/zzzz__EventType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Message)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
namespace Mirror::SimpleWeb {
struct EventType;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
struct Message;
}
// Write type traits
MARK_VAL_T(::Mirror::SimpleWeb::Message);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Message, "Mirror.SimpleWeb", "Message");
// Dependencies Mirror.SimpleWeb.EventType
namespace Mirror::SimpleWeb {
// Is value type: true
// CS Name: Mirror.SimpleWeb.Message
struct CORDL_TYPE Message {
public:
// Declarations
/// @brief Method .ctor, addr 0x181ad1d70, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  connId, ::Mirror::SimpleWeb::ArrayBuffer*  data) ;

/// @brief Method .ctor, addr 0x181ad1cc0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  connId, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x181ad1d20, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  connId, ::Mirror::SimpleWeb::EventType  type) ;

/// @brief Method .ctor, addr 0x181ad1cf0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::ArrayBuffer*  data) ;

/// @brief Method .ctor, addr 0x181ad1d40, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x181ad1ca0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SimpleWeb::EventType  type) ;

// Ctor Parameters []
// @brief default ctor
constexpr Message() ;

// Ctor Parameters [CppParam { name: "connId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::Mirror::SimpleWeb::EventType", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::Mirror::SimpleWeb::ArrayBuffer*", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "", def_value: None }]
constexpr Message(int32_t  connId, ::Mirror::SimpleWeb::EventType  type, ::Mirror::SimpleWeb::ArrayBuffer*  data, ::System::Exception*  exception) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field connId, offset: 0x0, size: 0x4, def value: None
 int32_t  connId;

/// @brief Field type, offset: 0x4, size: 0x4, def value: None
 ::Mirror::SimpleWeb::EventType  type;

/// @brief Field data, offset: 0x8, size: 0x8, def value: None
 ::Mirror::SimpleWeb::ArrayBuffer*  data;

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SimpleWeb::Message, connId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Message, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Message, data) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::SimpleWeb::Message, exception) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::SimpleWeb::Message) == 0x18, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb

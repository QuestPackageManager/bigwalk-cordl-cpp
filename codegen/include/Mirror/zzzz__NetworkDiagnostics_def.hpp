#pragma once
// IWYU pragma private; include "Mirror/NetworkDiagnostics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDiagnostics)
namespace Mirror {
struct NetworkDiagnostics_MessageInfo;
}
namespace Mirror {
class NetworkMessage;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Mirror {
class NetworkDiagnostics;
}
namespace Mirror {
struct NetworkDiagnostics_MessageInfo;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkDiagnostics*);
MARK_VAL_T(::Mirror::NetworkDiagnostics_MessageInfo);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkDiagnostics*, "Mirror", "NetworkDiagnostics");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkDiagnostics_MessageInfo, "Mirror", "NetworkDiagnostics/MessageInfo");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.NetworkDiagnostics/MessageInfo
struct CORDL_TYPE NetworkDiagnostics_MessageInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x181537600, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Mirror::NetworkMessage*  message, int32_t  channel, int32_t  bytes, int32_t  count) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiagnostics_MessageInfo() ;

// Ctor Parameters [CppParam { name: "message", ty: "::Mirror::NetworkMessage*", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkDiagnostics_MessageInfo(::Mirror::NetworkMessage*  message, int32_t  channel, int32_t  bytes, int32_t  count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field message, offset: 0x0, size: 0x8, def value: None
 ::Mirror::NetworkMessage*  message;

/// @brief Field channel, offset: 0x8, size: 0x4, def value: None
 int32_t  channel;

/// @brief Field bytes, offset: 0xc, size: 0x4, def value: None
 int32_t  bytes;

/// @brief Field count, offset: 0x10, size: 0x4, def value: None
 int32_t  count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkDiagnostics_MessageInfo, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkDiagnostics_MessageInfo, channel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkDiagnostics_MessageInfo, bytes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkDiagnostics_MessageInfo, count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkDiagnostics_MessageInfo) == 0x18, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkDiagnostics
class CORDL_TYPE NetworkDiagnostics : public ::System::Object {
public:
// Declarations
using MessageInfo = ::Mirror::NetworkDiagnostics_MessageInfo;

/// @brief Field InMessageEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InMessageEvent, put=setStaticF_InMessageEvent)) ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  InMessageEvent;

/// @brief Field OutMessageEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OutMessageEvent, put=setStaticF_OutMessageEvent)) ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  OutMessageEvent;

/// @brief Method OnReceive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void OnReceive(T  message, int32_t  channel, int32_t  bytes) ;

/// @brief Method OnSend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void OnSend(T  message, int32_t  channel, int32_t  bytes, int32_t  count) ;

/// @brief Method ResetStatics, addr 0x181542be0, size 0x70, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method add_InMessageEvent, addr 0x181542c50, size 0xb0, virtual false, abstract: false, final false
static inline void add_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

/// @brief Method add_OutMessageEvent, addr 0x181542d00, size 0xb0, virtual false, abstract: false, final false
static inline void add_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

static inline ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>* getStaticF_InMessageEvent() ;

static inline ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>* getStaticF_OutMessageEvent() ;

/// @brief Method remove_InMessageEvent, addr 0x181542db0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

/// @brief Method remove_OutMessageEvent, addr 0x181542e60, size 0xe0, virtual false, abstract: false, final false
static inline void remove_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

static inline void setStaticF_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

static inline void setStaticF_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDiagnostics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiagnostics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDiagnostics(NetworkDiagnostics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDiagnostics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDiagnostics(NetworkDiagnostics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkDiagnostics) == 0x10, "Size mismatch!");

} // namespace end def Mirror

#pragma once
// IWYU pragma private; include "Mirror/NetworkMessages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMessages)
namespace Mirror {
class NetworkConnection;
}
namespace Mirror {
class NetworkMessageDelegate;
}
namespace Mirror {
template<typename T,typename C>
class NetworkMessages___c__DisplayClass6_0_2;
}
namespace Mirror {
template<typename T,typename C>
class NetworkMessages___c__DisplayClass7_0_2;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Forward declare root types
namespace Mirror {
class NetworkMessages;
}
namespace Mirror {
template<typename T,typename C>
class NetworkMessages___c__DisplayClass6_0_2;
}
namespace Mirror {
template<typename T,typename C>
class NetworkMessages___c__DisplayClass7_0_2;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkMessages*);
MARK_GEN_REF_T_PTR(::Mirror::NetworkMessages___c__DisplayClass6_0_2);
MARK_GEN_REF_T_PTR(::Mirror::NetworkMessages___c__DisplayClass7_0_2);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkMessages*, "Mirror", "NetworkMessages");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkMessages___c__DisplayClass6_0_2, "Mirror", "NetworkMessages/<>c__DisplayClass6_0`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::NetworkMessages___c__DisplayClass7_0_2, "Mirror", "NetworkMessages/<>c__DisplayClass7_0`2");
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T,typename C>
// Is value type: false
// CS Name: Mirror.NetworkMessages/<>c__DisplayClass6_0`2<T,C>
class CORDL_TYPE NetworkMessages___c__DisplayClass6_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Action_3<C,T,int32_t>*  handler;

/// @brief Field requireAuthentication, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireAuthentication, put=__cordl_internal_set_requireAuthentication)) bool  requireAuthentication;

static inline ::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>* New_ctor() ;

/// @brief Method <WrapHandler>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _WrapHandler_b__0(::Mirror::NetworkConnection*  conn, ::Mirror::NetworkReader*  reader, int32_t  channelId) ;

constexpr ::System::Action_3<C,T,int32_t>* const& __cordl_internal_get_handler() const;

constexpr ::System::Action_3<C,T,int32_t>*& __cordl_internal_get_handler() ;

constexpr bool const& __cordl_internal_get_requireAuthentication() const;

constexpr bool& __cordl_internal_get_requireAuthentication() ;

constexpr void __cordl_internal_set_handler(::System::Action_3<C,T,int32_t>*  value) ;

constexpr void __cordl_internal_set_requireAuthentication(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMessages___c__DisplayClass6_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages___c__DisplayClass6_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMessages___c__DisplayClass6_0_2(NetworkMessages___c__DisplayClass6_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages___c__DisplayClass6_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessages___c__DisplayClass6_0_2(NetworkMessages___c__DisplayClass6_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18330};

/// @brief Field requireAuthentication, offset: 0x10, size: 0x1, def value: None
 bool  ___requireAuthentication;

/// @brief Field handler, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<C,T,int32_t>*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// cpp template
template<typename T,typename C>
// Is value type: false
// CS Name: Mirror.NetworkMessages/<>c__DisplayClass7_0`2<T,C>
class CORDL_TYPE NetworkMessages___c__DisplayClass7_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Action_2<C,T>*  handler;

static inline ::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>* New_ctor() ;

/// @brief Method <WrapHandler>g__Wrapped|0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _WrapHandler_g__Wrapped_0(C  conn, T  msg, int32_t  _) ;

constexpr ::System::Action_2<C,T>* const& __cordl_internal_get_handler() const;

constexpr ::System::Action_2<C,T>*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::System::Action_2<C,T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMessages___c__DisplayClass7_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages___c__DisplayClass7_0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMessages___c__DisplayClass7_0_2(NetworkMessages___c__DisplayClass7_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages___c__DisplayClass7_0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessages___c__DisplayClass7_0_2(NetworkMessages___c__DisplayClass7_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18331};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<C,T>*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkMessages
class CORDL_TYPE NetworkMessages : public ::System::Object {
public:
// Declarations
template<typename T,typename C>
using __c__DisplayClass6_0_2 = ::Mirror::NetworkMessages___c__DisplayClass6_0_2<T, C>;

template<typename T,typename C>
using __c__DisplayClass7_0_2 = ::Mirror::NetworkMessages___c__DisplayClass7_0_2<T, C>;

/// @brief Method GetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline uint16_t GetId() ;

/// @brief Method Pack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Pack(T  message, ::Mirror::NetworkWriter*  writer) ;

/// @brief Method UnpackId, addr 0x1815358e0, size 0x40, virtual false, abstract: false, final false
static inline bool UnpackId(::Mirror::NetworkReader*  reader, ::by_ref<uint16_t>  messageId) ;

/// @brief Method WrapHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename C>
static inline ::Mirror::NetworkMessageDelegate* WrapHandler(::System::Action_2<C,T>*  handler, bool  requireAuthentication) ;

/// @brief Method WrapHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename C>
static inline ::Mirror::NetworkMessageDelegate* WrapHandler(::System::Action_3<C,T,int32_t>*  handler, bool  requireAuthentication) ;

/// @brief Method get_MaxContentSize, addr 0x18154a200, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_MaxContentSize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkMessages(NetworkMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkMessages(NetworkMessages const& ) = delete;

/// @brief Field IdSize offset 0xffffffff size 0x4
static constexpr int32_t  IdSize{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18332};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkMessages) == 0x10, "Size mismatch!");

} // namespace end def Mirror

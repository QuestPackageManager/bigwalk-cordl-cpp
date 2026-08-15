#pragma once
// IWYU pragma private; include "Dissonance/Networking/RoomClientsCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomClientsCollection_1)
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1_ClientIdComparer;
}
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1;
}
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1_ClientIdComparer;
}
namespace Dissonance::Networking {
template<typename T>
class RoomClientsCollection_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::RoomClientsCollection_1);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer);
MARK_GEN_REF_T_PTR(::Dissonance::Networking::RoomClientsCollection_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::RoomClientsCollection_1, "Dissonance.Networking", "RoomClientsCollection`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer, "Dissonance.Networking", "RoomClientsCollection`1/ClientIdComparer");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::RoomClientsCollection_1___c, "Dissonance.Networking", "RoomClientsCollection`1/<>c");
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Networking.RoomClientsCollection`1/ClientIdComparer<T>
class CORDL_TYPE RoomClientsCollection_1_ClientIdComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*() noexcept;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Compare(::Dissonance::Networking::ClientInfo_1<T>*  x, ::Dissonance::Networking::ClientInfo_1<T>*  y) ;

static inline ::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>"
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>* i___System__Collections__Generic__IComparer_1___Dissonance__Networking__ClientInfo_1_T___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomClientsCollection_1_ClientIdComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1_ClientIdComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomClientsCollection_1_ClientIdComparer(RoomClientsCollection_1_ClientIdComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1_ClientIdComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomClientsCollection_1_ClientIdComparer(RoomClientsCollection_1_ClientIdComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Networking.RoomClientsCollection`1/<>c<T>
class CORDL_TYPE RoomClientsCollection_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::RoomClientsCollection_1___c<T>*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*  __9__13_0;

static inline ::Dissonance::Networking::RoomClientsCollection_1___c<T>* New_ctor() ;

/// @brief Method <.ctor>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* __ctor_b__13_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::RoomClientsCollection_1___c<T>* getStaticF___9() ;

static inline ::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::Dissonance::Networking::RoomClientsCollection_1___c<T>*  value) ;

static inline void setStaticF___9__13_0(::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomClientsCollection_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomClientsCollection_1___c(RoomClientsCollection_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomClientsCollection_1___c(RoomClientsCollection_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
// Dependencies System.Object
namespace Dissonance::Networking {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Networking.RoomClientsCollection`1<T>
class CORDL_TYPE RoomClientsCollection_1 : public ::System::Object {
public:
// Declarations
using ClientIdComparer = ::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>;

using __c = ::Dissonance::Networking::RoomClientsCollection_1___c<T>;

/// @brief Field ClientComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ClientComparer, put=setStaticF_ClientComparer)) ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*  ClientComparer;

/// @brief Field _clientByRoomName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientByRoomName, put=__cordl_internal_set__clientByRoomName)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*  _clientByRoomName;

/// @brief Field _listStringPool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__listStringPool, put=__cordl_internal_set__listStringPool)) ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*  _listStringPool;

/// @brief Field _roomNamesByHash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomNamesByHash, put=__cordl_internal_set__roomNamesByHash)) ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*  _roomNamesByHash;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(::StringW  room, ::Dissonance::Networking::ClientInfo_1<T>*  client) ;

/// @brief Method AddToHashCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddToHashCache(::StringW  name) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClientCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ClientCount() ;

static inline ::Dissonance::Networking::RoomClientsCollection_1<T>* New_ctor() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(::StringW  room, ::Dissonance::Networking::ClientInfo_1<T>*  client) ;

/// @brief Method RemoveFromHashCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveFromHashCache(::StringW  name) ;

/// @brief Method TryGetClientsInRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*  output) ;

/// @brief Method TryGetClientsInRoom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*  output) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>* const& __cordl_internal_get__clientByRoomName() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*& __cordl_internal_get__clientByRoomName() ;

constexpr ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get__listStringPool() const;

constexpr ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__listStringPool() ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get__roomNamesByHash() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__roomNamesByHash() ;

constexpr void __cordl_internal_set__clientByRoomName(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*  value) ;

constexpr void __cordl_internal_set__listStringPool(::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__roomNamesByHash(::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>* getStaticF_ClientComparer() ;

static inline void setStaticF_ClientComparer(::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomClientsCollection_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomClientsCollection_1(RoomClientsCollection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomClientsCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomClientsCollection_1(RoomClientsCollection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16891};

/// @brief Field _clientByRoomName, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*  ____clientByRoomName;

/// @brief Field _roomNamesByHash, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*  ____roomNamesByHash;

/// @brief Field _listStringPool, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*  ____listStringPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking

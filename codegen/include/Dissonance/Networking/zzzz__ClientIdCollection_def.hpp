#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientIdCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClientIdCollection)
namespace Dissonance::Networking {
class ClientIdCollection___c;
}
namespace Dissonance::Networking {
struct ClientInfo;
}
namespace Dissonance::Networking {
class IReadonlyClientIdCollection;
}
namespace Dissonance {
class Log;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking {
class ClientIdCollection;
}
namespace Dissonance::Networking {
class ClientIdCollection___c;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::ClientIdCollection*);
MARK_REF_T(::Dissonance::Networking::ClientIdCollection___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ClientIdCollection*, "Dissonance.Networking", "ClientIdCollection");
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ClientIdCollection___c*, "Dissonance.Networking", "ClientIdCollection/<>c");
// Dependencies System.Object
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.ClientIdCollection/<>c
class CORDL_TYPE ClientIdCollection___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::Networking::ClientIdCollection___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  __9__6_0;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*  __9__6_1;

static inline ::Dissonance::Networking::ClientIdCollection___c* New_ctor() ;

/// @brief Method <.ctor>b__6_0, addr 0x1805ed2c0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW> __ctor_b__6_0(::StringW  a, int32_t  i) ;

/// @brief Method <.ctor>b__6_1, addr 0x1805ed2f0, size 0x10, virtual false, abstract: false, final false
inline bool __ctor_b__6_1(::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Networking::ClientIdCollection___c* getStaticF___9() ;

static inline ::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* getStaticF___9__6_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>* getStaticF___9__6_1() ;

static inline void setStaticF___9(::Dissonance::Networking::ClientIdCollection___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_3<::StringW,int32_t,::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  value) ;

static inline void setStaticF___9__6_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientIdCollection___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientIdCollection___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientIdCollection___c(ClientIdCollection___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdCollection___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientIdCollection___c(ClientIdCollection___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16873};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Networking::ClientIdCollection___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Networking
// Dependencies System.Object
namespace Dissonance::Networking {
// Is value type: false
// CS Name: Dissonance.Networking.ClientIdCollection
class CORDL_TYPE ClientIdCollection : public ::System::Object {
public:
// Declarations
using __c = ::Dissonance::Networking::ClientIdCollection___c;

 __declspec(property(get=get_Items)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  Items;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _alive, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__alive, put=__cordl_internal_set__alive)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  _alive;

/// @brief Field _freeIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__freeIds, put=__cordl_internal_set__freeIds)) ::System::Collections::Generic::List_1<uint16_t>*  _freeIds;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Collections::Generic::List_1<::StringW>*  _items;

/// @brief Convert operator to "::Dissonance::Networking::IReadonlyClientIdCollection"
constexpr operator  ::Dissonance::Networking::IReadonlyClientIdCollection*() noexcept;

/// @brief Method AddFreeId, addr 0x1805da8b0, size 0xb0, virtual false, abstract: false, final false
inline void AddFreeId(uint16_t  id) ;

/// @brief Method Clear, addr 0x1805da960, size 0x60, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetFreeId, addr 0x1805da9c0, size 0x60, virtual false, abstract: false, final false
inline uint16_t GetFreeId() ;

/// @brief Method GetId, addr 0x1805daa20, size 0xb0, virtual true, abstract: false, final true
inline ::System::Nullable_1<uint16_t> GetId(::StringW  name) ;

/// @brief Method GetName, addr 0x1805daad0, size 0x40, virtual true, abstract: false, final true
inline ::StringW GetName(uint16_t  id) ;

/// @brief Method Load, addr 0x1805dab10, size 0x1e0, virtual false, abstract: false, final false
inline void Load(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*  clients) ;

static inline ::Dissonance::Networking::ClientIdCollection* New_ctor() ;

/// @brief Method Register, addr 0x1805dacf0, size 0x180, virtual false, abstract: false, final false
inline uint16_t Register(::StringW  name) ;

/// @brief Method Unregister, addr 0x1805dae70, size 0x100, virtual false, abstract: false, final false
inline bool Unregister(::StringW  name) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* const& __cordl_internal_get__alive() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*& __cordl_internal_get__alive() ;

constexpr ::System::Collections::Generic::List_1<uint16_t>* const& __cordl_internal_get__freeIds() const;

constexpr ::System::Collections::Generic::List_1<uint16_t>*& __cordl_internal_get__freeIds() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__items() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__alive(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  value) ;

constexpr void __cordl_internal_set__freeIds(::System::Collections::Generic::List_1<uint16_t>*  value) ;

constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x1805dafc0, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Items, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>* get_Items() ;

/// @brief Convert to "::Dissonance::Networking::IReadonlyClientIdCollection"
constexpr ::Dissonance::Networking::IReadonlyClientIdCollection* i___Dissonance__Networking__IReadonlyClientIdCollection() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientIdCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientIdCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientIdCollection(ClientIdCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientIdCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientIdCollection(ClientIdCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16874};

/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____items;

/// @brief Field _freeIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint16_t>*  ____freeIds;

/// @brief Field _alive, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint16_t,::StringW>>*  ____alive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::ClientIdCollection, ____items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::ClientIdCollection, ____freeIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::ClientIdCollection, ____alive) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::ClientIdCollection) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Networking

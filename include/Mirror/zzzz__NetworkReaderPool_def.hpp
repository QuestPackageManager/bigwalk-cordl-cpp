#pragma once
// IWYU pragma private; include "Mirror/NetworkReaderPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkReaderPool)
namespace Mirror {
class NetworkReaderPool___c;
}
namespace Mirror {
class NetworkReaderPooled;
}
namespace Mirror {
template<typename T>
class Pool_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Mirror {
class NetworkReaderPool;
}
namespace Mirror {
class NetworkReaderPool___c;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkReaderPool*);
MARK_REF_T(::Mirror::NetworkReaderPool___c*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkReaderPool*, "Mirror", "NetworkReaderPool");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkReaderPool___c*, "Mirror", "NetworkReaderPool/<>c");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkReaderPool/<>c
class CORDL_TYPE NetworkReaderPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::NetworkReaderPool___c*  __9;

static inline ::Mirror::NetworkReaderPool___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x181552540, size 0x90, virtual false, abstract: false, final false
inline ::Mirror::NetworkReaderPooled* __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::NetworkReaderPool___c* getStaticF___9() ;

static inline void setStaticF___9(::Mirror::NetworkReaderPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkReaderPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPool___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkReaderPool___c(NetworkReaderPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPool___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkReaderPool___c(NetworkReaderPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkReaderPool___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkReaderPool
class CORDL_TYPE NetworkReaderPool : public ::System::Object {
public:
// Declarations
using __c = ::Mirror::NetworkReaderPool___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*  Pool;

/// @brief Method Get, addr 0x1811156a0, size 0x136c0, virtual false, abstract: false, final false
static inline ::Mirror::NetworkReaderPooled* Get(::ArrayW<uint8_t>  bytes) ;

/// @brief Method Get, addr 0x181535920, size 0x1b0, virtual false, abstract: false, final false
static inline ::Mirror::NetworkReaderPooled* Get(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method Return, addr 0x18154c470, size 0x70, virtual false, abstract: false, final false
static inline void Return(::Mirror::NetworkReaderPooled*  reader) ;

static inline ::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::Mirror::Pool_1<::Mirror::NetworkReaderPooled*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkReaderPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkReaderPool(NetworkReaderPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkReaderPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkReaderPool(NetworkReaderPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkReaderPool) == 0x10, "Size mismatch!");

} // namespace end def Mirror

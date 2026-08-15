#pragma once
// IWYU pragma private; include "Mirror/NetworkWriterPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkWriterPool)
namespace Mirror {
class NetworkWriterPool___c;
}
namespace Mirror {
class NetworkWriterPooled;
}
namespace Mirror {
template<typename T>
class Pool_1;
}
// Forward declare root types
namespace Mirror {
class NetworkWriterPool;
}
namespace Mirror {
class NetworkWriterPool___c;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkWriterPool*);
MARK_REF_T(::Mirror::NetworkWriterPool___c*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriterPool*, "Mirror", "NetworkWriterPool");
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriterPool___c*, "Mirror", "NetworkWriterPool/<>c");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkWriterPool/<>c
class CORDL_TYPE NetworkWriterPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::NetworkWriterPool___c*  __9;

static inline ::Mirror::NetworkWriterPool___c* New_ctor() ;

/// @brief Method <.cctor>b__3_0, addr 0x181598800, size 0x80, virtual false, abstract: false, final false
inline ::Mirror::NetworkWriterPooled* __cctor_b__3_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::NetworkWriterPool___c* getStaticF___9() ;

static inline void setStaticF___9(::Mirror::NetworkWriterPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriterPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPool___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWriterPool___c(NetworkWriterPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPool___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWriterPool___c(NetworkWriterPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkWriterPool___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkWriterPool
class CORDL_TYPE NetworkWriterPool : public ::System::Object {
public:
// Declarations
using __c = ::Mirror::NetworkWriterPool___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*  Pool;

/// @brief Method Get, addr 0x18035c850, size 0x80, virtual false, abstract: false, final false
static inline ::Mirror::NetworkWriterPooled* Get() ;

/// @brief Method Return, addr 0x18035c8d0, size 0xb0, virtual false, abstract: false, final false
static inline void Return(::Mirror::NetworkWriterPooled*  writer) ;

static inline ::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::Mirror::Pool_1<::Mirror::NetworkWriterPooled*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriterPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWriterPool(NetworkWriterPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriterPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWriterPool(NetworkWriterPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkWriterPool) == 0x10, "Size mismatch!");

} // namespace end def Mirror

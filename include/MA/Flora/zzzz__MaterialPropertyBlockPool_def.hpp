#pragma once
// IWYU pragma private; include "MA/Flora/MaterialPropertyBlockPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockPool)
namespace MA::Flora {
class MaterialPropertyBlockPool___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace MA::Flora {
class MaterialPropertyBlockPool;
}
namespace MA::Flora {
class MaterialPropertyBlockPool___c;
}
// Write type traits
MARK_REF_T(::MA::Flora::MaterialPropertyBlockPool*);
MARK_REF_T(::MA::Flora::MaterialPropertyBlockPool___c*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MaterialPropertyBlockPool*, "MA.Flora", "MaterialPropertyBlockPool");
DEFINE_IL2CPP_CLASS(::MA::Flora::MaterialPropertyBlockPool___c*, "MA.Flora", "MaterialPropertyBlockPool/<>c");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MaterialPropertyBlockPool/<>c
class CORDL_TYPE MaterialPropertyBlockPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::MA::Flora::MaterialPropertyBlockPool___c*  __9;

static inline ::MA::Flora::MaterialPropertyBlockPool___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x1803eebe0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* __cctor_b__4_0() ;

/// @brief Method <.cctor>b__4_1, addr 0x1814c1660, size 0x20, virtual false, abstract: false, final false
inline void __cctor_b__4_1(::UnityEngine::MaterialPropertyBlock*  p) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::MA::Flora::MaterialPropertyBlockPool___c* getStaticF___9() ;

static inline void setStaticF___9(::MA::Flora::MaterialPropertyBlockPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlockPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPool___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockPool___c(MaterialPropertyBlockPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPool___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockPool___c(MaterialPropertyBlockPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MaterialPropertyBlockPool___c) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MaterialPropertyBlockPool
class CORDL_TYPE MaterialPropertyBlockPool : public ::System::Object {
public:
// Declarations
using __c = ::MA::Flora::MaterialPropertyBlockPool___c;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*  s_Instance;

/// @brief Method Get, addr 0x1814c02a0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::MaterialPropertyBlock* Get() ;

/// @brief Method Get, addr 0x1814c0240, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::MaterialPropertyBlock*> Get(::by_ref<::UnityEngine::MaterialPropertyBlock*>  mpb) ;

/// @brief Method Release, addr 0x1814c0360, size 0x140, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::MaterialPropertyBlock*  mpb) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>* getStaticF_s_Instance() ;

static inline void setStaticF_s_Instance(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::MaterialPropertyBlock*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlockPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockPool(MaterialPropertyBlockPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockPool(MaterialPropertyBlockPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MaterialPropertyBlockPool) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora

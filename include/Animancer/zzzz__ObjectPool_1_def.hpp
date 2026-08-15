#pragma once
// IWYU pragma private; include "Animancer/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace Animancer {
template<typename T>
struct ObjectPool_1_Disposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Animancer {
template<typename T>
class ObjectPool_1;
}
namespace Animancer {
template<typename T>
struct ObjectPool_1_Disposable;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::ObjectPool_1);
MARK_GEN_VAL_T(::Animancer::ObjectPool_1_Disposable);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::ObjectPool_1, "Animancer", "ObjectPool`1");
DEFINE_IL2CPP_GEN_CLASS(::Animancer::ObjectPool_1_Disposable, "Animancer", "ObjectPool`1/Disposable");
// Dependencies 
namespace Animancer {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Animancer.ObjectPool`1/Disposable<T>
struct CORDL_TYPE ObjectPool_1_Disposable {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<T>  item, ::System::Action_1<T>*  onRelease) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1_Disposable() ;

// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: None }, CppParam { name: "OnRelease", ty: "::System::Action_1<T>*", modifiers: "", def_value: None }]
constexpr ObjectPool_1_Disposable(T  Item, ::System::Action_1<T>*  OnRelease) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18086};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item, offset: 0x0, size: 0x8, def value: None
 T  Item;

/// @brief Field OnRelease, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<T>*  OnRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
using Disposable = ::Animancer::ObjectPool_1_Disposable<T>;

/// @brief Field Items, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Items, put=setStaticF_Items)) ::System::Collections::Generic::List_1<T>*  Items;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T Acquire() ;

/// @brief Method GetDetails, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW GetDetails() ;

/// @brief Method IncreaseCapacityTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void IncreaseCapacityTo(int32_t  capacity) ;

/// @brief Method IncreaseCountTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void IncreaseCountTo(int32_t  count) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(T  item) ;

static inline ::System::Collections::Generic::List_1<T>* getStaticF_Items() ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t get_Count() ;

static inline void setStaticF_Items(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer

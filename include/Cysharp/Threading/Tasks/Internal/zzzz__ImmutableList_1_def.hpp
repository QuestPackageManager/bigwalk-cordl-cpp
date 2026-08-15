#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ImmutableList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImmutableList_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class ImmutableList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::ImmutableList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::ImmutableList_1, "Cysharp.Threading.Tasks.Internal", "ImmutableList`1");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.ImmutableList`1<T>
class CORDL_TYPE ImmutableList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data)) ::ArrayW<T>  Data;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*  Empty;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<T>  data;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Add(T  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value) ;

static inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* New_ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* New_ctor(::ArrayW<T>  data) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* Remove(T  value) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<T>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  data) ;

static inline ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>* getStaticF_Empty() ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Data() ;

static inline void setStaticF_Empty(::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImmutableList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImmutableList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ImmutableList_1(ImmutableList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImmutableList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImmutableList_1(ImmutableList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14758};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal

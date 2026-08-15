#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/EnumNameValueCache_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumNameValueCache_1)
namespace Rewired::Utils::Classes::Data {
template<typename TKey,typename TValue>
class ADictionary_2;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename TEnum>
class EnumNameValueCache_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Utility::EnumNameValueCache_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Utility::EnumNameValueCache_1, "Rewired.Utils.Classes.Utility", "EnumNameValueCache`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename TEnum>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.EnumNameValueCache`1<TEnum>
class CORDL_TYPE EnumNameValueCache_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field PGcGbGTaIJLzAfGyArJSKDfvIrsw, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PGcGbGTaIJLzAfGyArJSKDfvIrsw, put=__cordl_internal_set_PGcGbGTaIJLzAfGyArJSKDfvIrsw)) ::ArrayW<int64_t>  PGcGbGTaIJLzAfGyArJSKDfvIrsw;

/// @brief Field RNyDRsJweReoBSJgJlMtyrWSqRMkA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RNyDRsJweReoBSJgJlMtyrWSqRMkA, put=setStaticF_RNyDRsJweReoBSJgJlMtyrWSqRMkA)) ::Rewired::Utils::Classes::Utility::EnumNameValueCache_1<TEnum>*  RNyDRsJweReoBSJgJlMtyrWSqRMkA;

/// @brief Field aRKssCqxrJCnhnJRRpdqbOWjSSUx, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_aRKssCqxrJCnhnJRRpdqbOWjSSUx, put=__cordl_internal_set_aRKssCqxrJCnhnJRRpdqbOWjSSUx)) ::Rewired::Utils::Classes::Data::ADictionary_2<::StringW,TEnum>*  aRKssCqxrJCnhnJRRpdqbOWjSSUx;

/// @brief Field wczoJfMqFBxVlesouwPVHiFWXsYF, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_wczoJfMqFBxVlesouwPVHiFWXsYF, put=__cordl_internal_set_wczoJfMqFBxVlesouwPVHiFWXsYF)) ::ArrayW<::StringW>  wczoJfMqFBxVlesouwPVHiFWXsYF;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(::StringW  name) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(int64_t  value) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Free() ;

/// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW GetName(int64_t  value) ;

/// @brief Method GetNameAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW GetNameAt(int32_t  index) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum GetValue(::StringW  name) ;

/// @brief Method GetValueAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum GetValueAt(int32_t  index) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(::StringW  name) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(int64_t  value) ;

static inline ::Rewired::Utils::Classes::Utility::EnumNameValueCache_1<TEnum>* New_ctor() ;

/// @brief Method TryGetName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetName(int64_t  value, ::by_ref<::StringW>  name) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(::StringW  name, ::by_ref<TEnum>  value) ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_PGcGbGTaIJLzAfGyArJSKDfvIrsw() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_PGcGbGTaIJLzAfGyArJSKDfvIrsw() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::StringW,TEnum>* const& __cordl_internal_get_aRKssCqxrJCnhnJRRpdqbOWjSSUx() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<::StringW,TEnum>*& __cordl_internal_get_aRKssCqxrJCnhnJRRpdqbOWjSSUx() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_wczoJfMqFBxVlesouwPVHiFWXsYF() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_wczoJfMqFBxVlesouwPVHiFWXsYF() ;

constexpr void __cordl_internal_set_PGcGbGTaIJLzAfGyArJSKDfvIrsw(::ArrayW<int64_t>  value) ;

constexpr void __cordl_internal_set_aRKssCqxrJCnhnJRRpdqbOWjSSUx(::Rewired::Utils::Classes::Data::ADictionary_2<::StringW,TEnum>*  value) ;

constexpr void __cordl_internal_set_wczoJfMqFBxVlesouwPVHiFWXsYF(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Utils::Classes::Utility::EnumNameValueCache_1<TEnum>* getStaticF_RNyDRsJweReoBSJgJlMtyrWSqRMkA() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::EnumNameValueCache_1<TEnum>* get_Default() ;

static inline void setStaticF_RNyDRsJweReoBSJgJlMtyrWSqRMkA(::Rewired::Utils::Classes::Utility::EnumNameValueCache_1<TEnum>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumNameValueCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumNameValueCache_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumNameValueCache_1(EnumNameValueCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumNameValueCache_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumNameValueCache_1(EnumNameValueCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2994};

/// @brief Field aRKssCqxrJCnhnJRRpdqbOWjSSUx, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<::StringW,TEnum>*  ___aRKssCqxrJCnhnJRRpdqbOWjSSUx;

/// @brief Field wczoJfMqFBxVlesouwPVHiFWXsYF, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___wczoJfMqFBxVlesouwPVHiFWXsYF;

/// @brief Field PGcGbGTaIJLzAfGyArJSKDfvIrsw, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___PGcGbGTaIJLzAfGyArJSKDfvIrsw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility

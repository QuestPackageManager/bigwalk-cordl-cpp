#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ExpandableArray_DataContainer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpandableArray_DataContainer_1)
namespace Rewired::Utils::Classes::Data {
template<typename >
class ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
class ExpandableArray_DataContainer_1;
}
namespace Rewired::Utils::Classes::Data {
template<typename >
class ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1);
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1, "Rewired.Utils.Classes.Data", "ExpandableArray_DataContainer`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW, "Rewired.Utils.Classes.Data", "ExpandableArray_DataContainer`1/PbAWKZVyvVnMcqRGMIUTwMTJbCeW");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename >
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ExpandableArray_DataContainer`1/PbAWKZVyvVnMcqRGMIUTwMTJbCeW<>
class CORDL_TYPE ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<\u{1}>"
constexpr operator  ::System::IComparable_1<>*() noexcept;

/// @brief Method TkWcQlhtcPvHojTaXHoCpNvAGrgCA, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void TkWcQlhtcPvHojTaXHoCpNvAGrgCA(  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YAtdckBovaWQuyOTolIcxDNpljGK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool YAtdckBovaWQuyOTolIcxDNpljGK(  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method eUAOlkZOytUgSNuVayHLLVZKYJRf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void eUAOlkZOytUgSNuVayHLLVZKYJRf() ;

/// @brief Convert to "::System::IComparable_1<\u{1}>"
constexpr ::System::IComparable_1<>* i___System__IComparable_1__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW(ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.ExpandableArray_DataContainer`1<T>
class CORDL_TYPE ExpandableArray_DataContainer_1 : public ::System::Object {
public:
// Declarations
using PbAWKZVyvVnMcqRGMIUTwMTJbCeW = ::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1_PbAWKZVyvVnMcqRGMIUTwMTJbCeW<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_FreeSpace)) int32_t  FreeSpace;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_MaxLength)) int32_t  MaxLength;

/// @brief Field MbMduNoIAMizjtpiHPmvFcDCeVpbA, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MbMduNoIAMizjtpiHPmvFcDCeVpbA, put=__cordl_internal_set_MbMduNoIAMizjtpiHPmvFcDCeVpbA)) int32_t  MbMduNoIAMizjtpiHPmvFcDCeVpbA;

/// @brief Field TxXdwUIzYCaaOIsOvnSUrqtabAbhA, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_TxXdwUIzYCaaOIsOvnSUrqtabAbhA, put=__cordl_internal_set_TxXdwUIzYCaaOIsOvnSUrqtabAbhA)) int32_t  TxXdwUIzYCaaOIsOvnSUrqtabAbhA;

/// @brief Field VnHeLZNZXpsAoMIJTkzfNnQDtJdQ, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VnHeLZNZXpsAoMIJTkzfNnQDtJdQ, put=__cordl_internal_set_VnHeLZNZXpsAoMIJTkzfNnQDtJdQ)) int32_t  VnHeLZNZXpsAoMIJTkzfNnQDtJdQ;

/// @brief Field gZzCUpCrGSNISrAQVfJyswRSHAqgA, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_gZzCUpCrGSNISrAQVfJyswRSHAqgA, put=__cordl_internal_set_gZzCUpCrGSNISrAQVfJyswRSHAqgA)) bool  gZzCUpCrGSNISrAQVfJyswRSHAqgA;

/// @brief Field injector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_injector, put=__cordl_internal_set_injector)) T  injector;

/// @brief Field mJbvOyVWHNqiqDJjdAVTDwlleloAb, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mJbvOyVWHNqiqDJjdAVTDwlleloAb, put=__cordl_internal_set_mJbvOyVWHNqiqDJjdAVTDwlleloAb)) int32_t  mJbvOyVWHNqiqDJjdAVTDwlleloAb;

/// @brief Field nbvqRSCtgPvHXxpwJZxQgvIdMpvj, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nbvqRSCtgPvHXxpwJZxQgvIdMpvj, put=__cordl_internal_set_nbvqRSCtgPvHXxpwJZxQgvIdMpvj)) ::ArrayW<T>  nbvqRSCtgPvHXxpwJZxQgvIdMpvj;

/// @brief Method AddData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddData(T  item) ;

/// @brief Method AddIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t AddIfUnique(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsData(T  item) ;

/// @brief Method IndexOfData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOfData(T  item) ;

/// @brief Method Inject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Inject() ;

/// @brief Method InjectIfUnique, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t InjectIfUnique() ;

static inline ::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_1<T>* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method RemoveLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveLast() ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  size) ;

/// @brief Method SortAscending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SortAscending() ;

/// @brief Method SortDescending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SortDescending() ;

constexpr int32_t const& __cordl_internal_get_MbMduNoIAMizjtpiHPmvFcDCeVpbA() const;

constexpr int32_t& __cordl_internal_get_MbMduNoIAMizjtpiHPmvFcDCeVpbA() ;

constexpr int32_t const& __cordl_internal_get_TxXdwUIzYCaaOIsOvnSUrqtabAbhA() const;

constexpr int32_t& __cordl_internal_get_TxXdwUIzYCaaOIsOvnSUrqtabAbhA() ;

constexpr int32_t const& __cordl_internal_get_VnHeLZNZXpsAoMIJTkzfNnQDtJdQ() const;

constexpr int32_t& __cordl_internal_get_VnHeLZNZXpsAoMIJTkzfNnQDtJdQ() ;

constexpr bool const& __cordl_internal_get_gZzCUpCrGSNISrAQVfJyswRSHAqgA() const;

constexpr bool& __cordl_internal_get_gZzCUpCrGSNISrAQVfJyswRSHAqgA() ;

constexpr T const& __cordl_internal_get_injector() const;

constexpr T& __cordl_internal_get_injector() ;

constexpr int32_t const& __cordl_internal_get_mJbvOyVWHNqiqDJjdAVTDwlleloAb() const;

constexpr int32_t& __cordl_internal_get_mJbvOyVWHNqiqDJjdAVTDwlleloAb() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_nbvqRSCtgPvHXxpwJZxQgvIdMpvj() const;

constexpr ::ArrayW<T>& __cordl_internal_get_nbvqRSCtgPvHXxpwJZxQgvIdMpvj() ;

constexpr void __cordl_internal_set_MbMduNoIAMizjtpiHPmvFcDCeVpbA(int32_t  value) ;

constexpr void __cordl_internal_set_TxXdwUIzYCaaOIsOvnSUrqtabAbhA(int32_t  value) ;

constexpr void __cordl_internal_set_VnHeLZNZXpsAoMIJTkzfNnQDtJdQ(int32_t  value) ;

constexpr void __cordl_internal_set_gZzCUpCrGSNISrAQVfJyswRSHAqgA(bool  value) ;

constexpr void __cordl_internal_set_injector(T  value) ;

constexpr void __cordl_internal_set_mJbvOyVWHNqiqDJjdAVTDwlleloAb(int32_t  value) ;

constexpr void __cordl_internal_set_nbvqRSCtgPvHXxpwJZxQgvIdMpvj(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_FreeSpace, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_FreeSpace() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_MaxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_MaxLength() ;

/// @brief Method lnYPisxnSyfOsdmuzncuPxcfArPo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void lnYPisxnSyfOsdmuzncuPxcfArPo() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpandableArray_DataContainer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpandableArray_DataContainer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandableArray_DataContainer_1(ExpandableArray_DataContainer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableArray_DataContainer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandableArray_DataContainer_1(ExpandableArray_DataContainer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3015};

/// @brief Field injector, offset: 0x10, size: 0x8, def value: None
 T  ___injector;

/// @brief Field nbvqRSCtgPvHXxpwJZxQgvIdMpvj, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___nbvqRSCtgPvHXxpwJZxQgvIdMpvj;

/// @brief Field mJbvOyVWHNqiqDJjdAVTDwlleloAb, offset: 0x20, size: 0x4, def value: None
 int32_t  ___mJbvOyVWHNqiqDJjdAVTDwlleloAb;

/// @brief Field TxXdwUIzYCaaOIsOvnSUrqtabAbhA, offset: 0x24, size: 0x4, def value: None
 int32_t  ___TxXdwUIzYCaaOIsOvnSUrqtabAbhA;

/// @brief Field MbMduNoIAMizjtpiHPmvFcDCeVpbA, offset: 0x28, size: 0x4, def value: None
 int32_t  ___MbMduNoIAMizjtpiHPmvFcDCeVpbA;

/// @brief Field VnHeLZNZXpsAoMIJTkzfNnQDtJdQ, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___VnHeLZNZXpsAoMIJTkzfNnQDtJdQ;

/// @brief Field gZzCUpCrGSNISrAQVfJyswRSHAqgA, offset: 0x30, size: 0x1, def value: None
 bool  ___gZzCUpCrGSNISrAQVfJyswRSHAqgA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data

#pragma once
// IWYU pragma private; include "EpicTransport/BidirectionalDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BidirectionalDictionary_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace EpicTransport {
template<typename T1,typename T2>
class BidirectionalDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::EpicTransport::BidirectionalDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::EpicTransport::BidirectionalDictionary_2, "EpicTransport", "BidirectionalDictionary`2");
// Dependencies System.Object
namespace EpicTransport {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: EpicTransport.BidirectionalDictionary`2<T1,T2>
class CORDL_TYPE BidirectionalDictionary_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_FirstTypes)) ::System::Collections::Generic::IEnumerable_1<T1>*  FirstTypes;

 __declspec(property(get=get_Item, put=set_Item)) T1  Item[];

 __declspec(property(get=get_Item, put=set_Item)) T2  Item[];

 __declspec(property(get=get_SecondTypes)) ::System::Collections::Generic::IEnumerable_1<T2>*  SecondTypes;

/// @brief Field t1ToT2Dict, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1ToT2Dict, put=__cordl_internal_set_t1ToT2Dict)) ::System::Collections::Generic::Dictionary_2<T1,T2>*  t1ToT2Dict;

/// @brief Field t2ToT1Dict, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2ToT1Dict, put=__cordl_internal_set_t2ToT1Dict)) ::System::Collections::Generic::Dictionary_2<T2,T1>*  t2ToT1Dict;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T1  key, T2  value) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T2  key, T1  value) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T1  key) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T2  key) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T1 Get(T2  key) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T2 Get(T1  key) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::EpicTransport::BidirectionalDictionary_2<T1,T2>* New_ctor() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(T1  key) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(T2  key) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(T1  key, ::by_ref<T2>  value) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(T2  key, ::by_ref<T1>  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<T1,T2>* const& __cordl_internal_get_t1ToT2Dict() const;

constexpr ::System::Collections::Generic::Dictionary_2<T1,T2>*& __cordl_internal_get_t1ToT2Dict() ;

constexpr ::System::Collections::Generic::Dictionary_2<T2,T1>* const& __cordl_internal_get_t2ToT1Dict() const;

constexpr ::System::Collections::Generic::Dictionary_2<T2,T1>*& __cordl_internal_get_t2ToT1Dict() ;

constexpr void __cordl_internal_set_t1ToT2Dict(::System::Collections::Generic::Dictionary_2<T1,T2>*  value) ;

constexpr void __cordl_internal_set_t2ToT1Dict(::System::Collections::Generic::Dictionary_2<T2,T1>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_FirstTypes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<T1>* get_FirstTypes() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T1 get_Item(T2  key) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T2 get_Item(T1  key) ;

/// @brief Method get_SecondTypes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<T2>* get_SecondTypes() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(T1  key, T2  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(T2  key, T1  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BidirectionalDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BidirectionalDictionary_2(BidirectionalDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BidirectionalDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BidirectionalDictionary_2(BidirectionalDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19039};

/// @brief Field t1ToT2Dict, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T1,T2>*  ___t1ToT2Dict;

/// @brief Field t2ToT1Dict, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T2,T1>*  ___t2ToT1Dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def EpicTransport

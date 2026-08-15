#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/KeyedGetSetValueStore_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedGetSetValueStore_1)
namespace Rewired::Utils::Interfaces {
template<typename T>
class IGetSetValue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename TKey>
class KeyedGetSetValueStore_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1, "Rewired.Utils.Classes.Data", "KeyedGetSetValueStore`1");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename TKey>
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.KeyedGetSetValueStore`1<TKey>
class CORDL_TYPE KeyedGetSetValueStore_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=IFcirpaIiFqJvMisXvDglsqfTvGpA)) int32_t  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___Count;

 __declspec(property(get=dYernARTKpLaFsCMiQMCyyJBvNdR)) bool  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_System_Object___IsReadOnly;

 __declspec(property(get=RfsgQRhIbIxSEusCdGEfGkbkEwoPB, put=nMgfWxDepeinCJhWhvKUOHCFrAZt)) ::System::Object*  System_Collections_Generic_IDictionary_TKey_System_Object__Item[];

 __declspec(property(get=lNpPRLtCpbXtfOELDHTSTDRtHvuF)) ::System::Collections::Generic::ICollection_1<TKey>*  System_Collections_Generic_IDictionary_TKey_System_Object__Keys;

 __declspec(property(get=zIRBPJgUmqiicPidANoXAOAHYuvlA)) ::System::Collections::Generic::ICollection_1<::System::Object*>*  System_Collections_Generic_IDictionary_TKey_System_Object__Values;

/// @brief Field eFJCmzyJepMnvYFEszhCIfnJGNrF, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_eFJCmzyJepMnvYFEszhCIfnJGNrF, put=__cordl_internal_set_eFJCmzyJepMnvYFEszhCIfnJGNrF)) bool  eFJCmzyJepMnvYFEszhCIfnJGNrF;

/// @brief Field fFSHnmXQjNaSMfrOmSrXVriRcgkLA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fFSHnmXQjNaSMfrOmSrXVriRcgkLA, put=__cordl_internal_set_fFSHnmXQjNaSMfrOmSrXVriRcgkLA)) ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  fFSHnmXQjNaSMfrOmSrXVriRcgkLA;

 __declspec(property(get=get_isReadOnlyCollection)) bool  isReadOnlyCollection;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AUkgjgOATiXbwDuvnSlQRVYdauaV, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void AUkgjgOATiXbwDuvnSlQRVYdauaV(TKey  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method AddItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline void AddItem(TKey  key, ::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>*  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(TKey  key) ;

/// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline bool ContainsValue(TKey  key) ;

/// @brief Method FNAHHcWyHkwFNcDzHcAAbXNodUrcb, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool FNAHHcWyHkwFNcDzHcAAbXNodUrcb(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GetItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline ::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>* GetItem(TKey  key) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline TValue GetValue(TKey  key) ;

/// @brief Method IFcirpaIiFqJvMisXvDglsqfTvGpA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IFcirpaIiFqJvMisXvDglsqfTvGpA() ;

/// @brief Method JtPlLsmNkjfMrqGfSNIMenFTFiGT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void JtPlLsmNkjfMrqGfSNIMenFTFiGT(TKey  _cordl_fixed_empty_name_whitespace, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method MTfGZQDayYgfhQIrQkkpceEIgdChB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MTfGZQDayYgfhQIrQkkpceEIgdChB(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>* New_ctor(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>* New_ctor(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OlTpEMQgOvKhrqgfmCojgPmSYTKQA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW OlTpEMQgOvKhrqgfmCojgPmSYTKQA(TKey  _cordl_fixed_empty_name_whitespace, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method RemoveItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline bool RemoveItem(TKey  key) ;

/// @brief Method RfsgQRhIbIxSEusCdGEfGkbkEwoPB, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* RfsgQRhIbIxSEusCdGEfGkbkEwoPB(TKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SMGpWoAIiyJvulvSRAobSTLQCrDr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* SMGpWoAIiyJvulvSRAobSTLQCrDr() ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline void SetValue(TKey  key, TValue  value) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

/// @brief Method TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
inline bool TrySetValue(TKey  key, TValue  value) ;

/// @brief Method WNbgpsOwkiAXKFZXyJoeAVOcvbqJ, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void WNbgpsOwkiAXKFZXyJoeAVOcvbqJ() ;

constexpr bool const& __cordl_internal_get_eFJCmzyJepMnvYFEszhCIfnJGNrF() const;

constexpr bool& __cordl_internal_get_eFJCmzyJepMnvYFEszhCIfnJGNrF() ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>* const& __cordl_internal_get_fFSHnmXQjNaSMfrOmSrXVriRcgkLA() const;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*& __cordl_internal_get_fFSHnmXQjNaSMfrOmSrXVriRcgkLA() ;

constexpr void __cordl_internal_set_eFJCmzyJepMnvYFEszhCIfnJGNrF(bool  value) ;

constexpr void __cordl_internal_set_fFSHnmXQjNaSMfrOmSrXVriRcgkLA(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method bloywIfpazmUZFyWIHtzOpQvnLHs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool bloywIfpazmUZFyWIHtzOpQvnLHs(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method dYernARTKpLaFsCMiQMCyyJBvNdR, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool dYernARTKpLaFsCMiQMCyyJBvNdR() ;

/// @brief Method gNQPjUtSbNKBgVoJKsfusmpAAooH, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool gNQPjUtSbNKBgVoJKsfusmpAAooH(TKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_isReadOnlyCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_isReadOnlyCollection() ;

/// @brief Method hDkdsjARfzRuHaqjKbysngcEcQale, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool hDkdsjARfzRuHaqjKbysngcEcQale(TKey  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey___System__Object___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>* i___System__Collections__Generic__IDictionary_2_TKey___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey___System__Object___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method lNpPRLtCpbXtfOELDHTSTDRtHvuF, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* lNpPRLtCpbXtfOELDHTSTDRtHvuF() ;

/// @brief Method nMgfWxDepeinCJhWhvKUOHCFrAZt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void nMgfWxDepeinCJhWhvKUOHCFrAZt(TKey  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method oeduRJzvXdmWxhljPhRWGXzSAiAr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void oeduRJzvXdmWxhljPhRWGXzSAiAr(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method sgYOKkNTDzfNxRLsyTslBuwnmvbJ, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool sgYOKkNTDzfNxRLsyTslBuwnmvbJ(TKey  _cordl_fixed_empty_name_whitespace, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method zIRBPJgUmqiicPidANoXAOAHYuvlA, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::System::Object*>* zIRBPJgUmqiicPidANoXAOAHYuvlA() ;

/// @brief Method zNteexkzpNLaYHfQWKDtlozpcKAsA, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void zNteexkzpNLaYHfQWKDtlozpcKAsA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyedGetSetValueStore_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyedGetSetValueStore_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedGetSetValueStore_1(KeyedGetSetValueStore_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedGetSetValueStore_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedGetSetValueStore_1(KeyedGetSetValueStore_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3058};

/// @brief Field fFSHnmXQjNaSMfrOmSrXVriRcgkLA, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  ___fFSHnmXQjNaSMfrOmSrXVriRcgkLA;

/// @brief Field eFJCmzyJepMnvYFEszhCIfnJGNrF, offset: 0x18, size: 0x1, def value: None
 bool  ___eFJCmzyJepMnvYFEszhCIfnJGNrF;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data

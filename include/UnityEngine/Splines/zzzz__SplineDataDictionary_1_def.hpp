#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineDataDictionary_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplineDataDictionary_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineDataDictionary_1___c;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineDataKeyValuePair_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
class SplineDataDictionary_1;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineDataDictionary_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineDataDictionary_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::SplineDataDictionary_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineDataDictionary_1, "UnityEngine.Splines", "SplineDataDictionary`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::SplineDataDictionary_1___c, "UnityEngine.Splines", "SplineDataDictionary`1/<>c");
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineDataDictionary`1/<>c<T>
class CORDL_TYPE SplineDataDictionary_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Splines::SplineDataDictionary_1___c<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*  __9__2_0;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*  __9__4_0;

static inline ::UnityEngine::Splines::SplineDataDictionary_1___c<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Keys>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW _get_Keys_b__2_0(::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*  x) ;

/// @brief Method <get_Values>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<T>* _get_Values_b__4_0(::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*  x) ;

static inline ::UnityEngine::Splines::SplineDataDictionary_1___c<T>* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>* getStaticF___9__2_0() ;

static inline ::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::UnityEngine::Splines::SplineDataDictionary_1___c<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::StringW>*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*,::UnityEngine::Splines::SplineData_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineDataDictionary_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineDataDictionary_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineDataDictionary_1___c(SplineDataDictionary_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineDataDictionary_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineDataDictionary_1___c(SplineDataDictionary_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.SplineDataDictionary`1<T>
class CORDL_TYPE SplineDataDictionary_1 : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Splines::SplineDataDictionary_1___c<T>;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Splines::SplineData_1<T>*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<T>*>*  Values;

/// @brief Field m_Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*  m_Data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(::StringW  key) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(::StringW  key) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* GetEnumerator() ;

/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<T>* GetOrCreate(::StringW  key) ;

static inline ::UnityEngine::Splines::SplineDataDictionary_1<T>* New_ctor() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(::StringW  key) ;

/// @brief Method RemoveEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveEmpty() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(::StringW  key, ::by_ref<::UnityEngine::Splines::SplineData_1<T>*>  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* const& __cordl_internal_get_m_Data() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*& __cordl_internal_get_m_Data() ;

constexpr void __cordl_internal_set_m_Data(::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<T>* get_Item(::StringW  key) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineData_1<T>*>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__SplineDataKeyValuePair_1_T___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(::StringW  key, ::UnityEngine::Splines::SplineData_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineDataDictionary_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineDataDictionary_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineDataDictionary_1(SplineDataDictionary_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineDataDictionary_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineDataDictionary_1(SplineDataDictionary_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18727};

/// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Splines::SplineDataKeyValuePair_1<T>*>*  ___m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Utility/Internal/Stack_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stack_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace WaveHarmonic::Crest::Utility::Internal {
template<typename T>
class Stack_1___c__DisplayClass3_0;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Utility::Internal {
template<typename T>
class Stack_1;
}
namespace WaveHarmonic::Crest::Utility::Internal {
template<typename T>
class Stack_1___c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Utility::Internal::Stack_1);
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Utility::Internal::Stack_1___c__DisplayClass3_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Utility::Internal::Stack_1, "WaveHarmonic.Crest.Utility.Internal", "Stack`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Utility::Internal::Stack_1___c__DisplayClass3_0, "WaveHarmonic.Crest.Utility.Internal", "Stack`1/<>c__DisplayClass3_0");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.Internal.Stack`1/<>c__DisplayClass3_0<T>
class CORDL_TYPE Stack_1___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field item, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) T  item;

static inline ::WaveHarmonic::Crest::Utility::Internal::Stack_1___c__DisplayClass3_0<T>* New_ctor() ;

/// @brief Method <Pop>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _Pop_b__0(T  candidate) ;

constexpr T const& __cordl_internal_get_item() const;

constexpr T& __cordl_internal_get_item() ;

constexpr void __cordl_internal_set_item(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stack_1___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stack_1___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1___c__DisplayClass3_0(Stack_1___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1___c__DisplayClass3_0(Stack_1___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20171};

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 T  ___item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Utility::Internal
// Dependencies System.Object
namespace WaveHarmonic::Crest::Utility::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Utility.Internal.Stack`1<T>
class CORDL_TYPE Stack_1 : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::WaveHarmonic::Crest::Utility::Internal::Stack_1___c__DisplayClass3_0<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Items, put=__cordl_internal_set__Items)) ::System::Collections::Generic::List_1<T>*  _Items;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::WaveHarmonic::Crest::Utility::Internal::Stack_1<T>* New_ctor() ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Pop(T  item) ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Push(T  item) ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get__Items() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get__Items() ;

constexpr void __cordl_internal_set__Items(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stack_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stack_1(Stack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stack_1(Stack_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20172};

/// @brief Field _Items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ____Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest::Utility::Internal

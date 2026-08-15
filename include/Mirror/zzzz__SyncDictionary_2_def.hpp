#pragma once
// IWYU pragma private; include "Mirror/SyncDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncIDictionary_2_def.hpp"
CORDL_MODULE_EXPORT(SyncDictionary_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2_KeyCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2_ValueCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace Mirror {
template<typename TKey,typename TValue>
class SyncDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::SyncDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncDictionary_2, "Mirror", "SyncDictionary`2");
// Dependencies Mirror.SyncIDictionary`2<TKey, TValue>
namespace Mirror {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Mirror.SyncDictionary`2<TKey,TValue>
class CORDL_TYPE SyncDictionary_2 : public ::Mirror::SyncIDictionary_2<TKey,TValue> {
public:
// Declarations
 __declspec(property(get=get_Keys)) ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>*  Values;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_Enumerator<TKey,TValue> GetEnumerator() ;

static inline ::Mirror::SyncDictionary_2<TKey,TValue>* New_ctor() ;

static inline ::Mirror::SyncDictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  d) ;

static inline ::Mirror::SyncDictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  eq) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  d) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  eq) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>* get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncDictionary_2(SyncDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncDictionary_2(SyncDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror

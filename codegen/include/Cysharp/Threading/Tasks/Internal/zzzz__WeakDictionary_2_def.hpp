#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/WeakDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WeakDictionary_2)
namespace Cysharp::Threading::Tasks::Internal {
template<typename TKey,typename TValue>
class WeakDictionary_2_Entry;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class WeakReference_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename TKey,typename TValue>
class WeakDictionary_2;
}
namespace Cysharp::Threading::Tasks::Internal {
template<typename TKey,typename TValue>
class WeakDictionary_2_Entry;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2, "Cysharp.Threading.Tasks.Internal", "WeakDictionary`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry, "Cysharp.Threading.Tasks.Internal", "WeakDictionary`2/Entry");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.WeakDictionary`2/Entry<TKey,TValue>
class CORDL_TYPE WeakDictionary_2_Entry : public ::System::Object {
public:
// Declarations
/// @brief Field Hash, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Hash, put=__cordl_internal_set_Hash)) int32_t  Hash;

/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::System::WeakReference_1<TKey>*  Key;

/// @brief Field Next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  Next;

/// @brief Field Prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  Prev;

/// @brief Field Value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) TValue  Value;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Count() ;

static inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* New_ctor() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Hash() const;

constexpr int32_t& __cordl_internal_get_Hash() ;

constexpr ::System::WeakReference_1<TKey>* const& __cordl_internal_get_Key() const;

constexpr ::System::WeakReference_1<TKey>*& __cordl_internal_get_Key() ;

constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* const& __cordl_internal_get_Next() const;

constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*& __cordl_internal_get_Next() ;

constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>* const& __cordl_internal_get_Prev() const;

constexpr ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*& __cordl_internal_get_Prev() ;

constexpr TValue const& __cordl_internal_get_Value() const;

constexpr TValue& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Hash(int32_t  value) ;

constexpr void __cordl_internal_set_Key(::System::WeakReference_1<TKey>*  value) ;

constexpr void __cordl_internal_set_Next(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_Prev(::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_Value(TValue  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeakDictionary_2_Entry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeakDictionary_2_Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WeakDictionary_2_Entry(WeakDictionary_2_Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeakDictionary_2_Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeakDictionary_2_Entry(WeakDictionary_2_Entry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14748};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::System::WeakReference_1<TKey>*  ___Key;

/// @brief Field Value, offset: 0x18, size: 0x8, def value: None
 TValue  ___Value;

/// @brief Field Hash, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Hash;

/// @brief Field Prev, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  ___Prev;

/// @brief Field Next, offset: 0x30, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
// Dependencies Cysharp.Threading.Tasks.Internal.WeakDictionary`2::Entry<TKey, TValue>, System.Object, System.Threading.SpinLock
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.WeakDictionary`2<TKey,TValue>
class CORDL_TYPE WeakDictionary_2 : public ::System::Object {
public:
// Declarations
using Entry = ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey, TValue>;

/// @brief Field buckets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buckets, put=__cordl_internal_set_buckets)) ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  buckets;

/// @brief Field gate, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Threading::SpinLock  gate;

/// @brief Field keyEqualityComparer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyEqualityComparer, put=__cordl_internal_set_keyEqualityComparer)) ::System::Collections::Generic::IEqualityComparer_1<TKey>*  keyEqualityComparer;

/// @brief Field loadFactor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadFactor, put=__cordl_internal_set_loadFactor)) float_t  loadFactor;

/// @brief Field size, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Method AddToBuckets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool AddToBuckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  targetBuckets, TKey  newKey, TValue  value, int32_t  keyHash) ;

/// @brief Method CalculateCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t CalculateCapacity(int32_t  collectionSize, float_t  loadFactor) ;

static inline ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2<TKey,TValue>* New_ctor(int32_t  capacity, float_t  loadFactor, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  keyComparer) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Remove(int32_t  hashIndex, ::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*  entry) ;

/// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* ToList() ;

/// @brief Method ToList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t ToList(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  list, bool  clear) ;

/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAdd(TKey  key, TValue  value) ;

/// @brief Method TryAddInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAddInternal(TKey  key, TValue  value) ;

/// @brief Method TryGetEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetEntry(TKey  key, ::by_ref<int32_t>  hashIndex, ::by_ref<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  entry) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

/// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryRemove(TKey  key) ;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*> const& __cordl_internal_get_buckets() const;

constexpr ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>& __cordl_internal_get_buckets() ;

constexpr ::System::Threading::SpinLock const& __cordl_internal_get_gate() const;

constexpr ::System::Threading::SpinLock& __cordl_internal_get_gate() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& __cordl_internal_get_keyEqualityComparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& __cordl_internal_get_keyEqualityComparer() ;

constexpr float_t const& __cordl_internal_get_loadFactor() const;

constexpr float_t& __cordl_internal_get_loadFactor() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_buckets(::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  value) ;

constexpr void __cordl_internal_set_gate(::System::Threading::SpinLock  value) ;

constexpr void __cordl_internal_set_keyEqualityComparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value) ;

constexpr void __cordl_internal_set_loadFactor(float_t  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, float_t  loadFactor, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  keyComparer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeakDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeakDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WeakDictionary_2(WeakDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeakDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeakDictionary_2(WeakDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14749};

/// @brief Field buckets, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Cysharp::Threading::Tasks::Internal::WeakDictionary_2_Entry<TKey,TValue>*>  ___buckets;

/// @brief Field size, offset: 0x18, size: 0x4, def value: None
 int32_t  ___size;

/// @brief Field gate, offset: 0x1c, size: 0x4, def value: None
 ::System::Threading::SpinLock  ___gate;

/// @brief Field loadFactor, offset: 0x20, size: 0x4, def value: None
 float_t  ___loadFactor;

/// @brief Field keyEqualityComparer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TKey>*  ___keyEqualityComparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal

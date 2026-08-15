#pragma once
// IWYU pragma private; include "Rewired/Utils/CollectionTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionTools)
namespace Rewired::Utils::Classes::Data {
template<typename T>
class RingBuffer_1;
}
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class IObjectPool_1;
}
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::Utils {
class CollectionTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::CollectionTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::CollectionTools*, "Rewired.Utils", "CollectionTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.CollectionTools
class CORDL_TYPE CollectionTools : public ::System::Object {
public:
// Declarations
/// @brief Method AddValueSafe, addr 0x1819027c0, size 0xb0, virtual false, abstract: false, final false
static inline void AddValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::StringW  key, ::System::Object*  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Clear(::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*  pool, ::Rewired::Utils::Classes::Data::RingBuffer_1<T>*  buffer) ;

/// @brief Method CreateInverseDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline ::System::Collections::Generic::Dictionary_2<TValue,TKey>* CreateInverseDictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict) ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Enqueue(::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*  pool, ::Rewired::Utils::Classes::Data::RingBuffer_1<T>*  buffer, T  item, ::by_ref<bool>  overrun) ;

/// @brief Method GetDictionaryValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturn>
static inline TReturn GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key) ;

/// @brief Method GetDictionaryValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturn>
static inline TReturn GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<bool>  success) ;

/// @brief Method GetDictionaryValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline TValue GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, TKey  key) ;

/// @brief Method GetDictionaryValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline TValue GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, TKey  key, ::by_ref<bool>  success) ;

/// @brief Method GetDictionaryValueSafe, addr 0x181902ae0, size 0xe0, virtual false, abstract: false, final false
static inline bool GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::System::Type*  type, ::by_ref<::System::Object*>  value) ;

/// @brief Method GetDictionaryValueSafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TReturn>
static inline bool GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<TReturn>  value) ;

/// @brief Method GetDictionaryValueSafe_float, addr 0x181902870, size 0x140, virtual false, abstract: false, final false
static inline bool GetDictionaryValueSafe_float(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<float_t>  value) ;

/// @brief Method GetDictionaryValueSafe_int, addr 0x1819029b0, size 0x130, virtual false, abstract: false, final false
static inline bool GetDictionaryValueSafe_int(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<int32_t>  value) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetValue(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  index) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetValue(::System::Collections::IEnumerable*  enumerable, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionTools(CollectionTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionTools(CollectionTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2916};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::CollectionTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils

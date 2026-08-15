#pragma once
// IWYU pragma private; include "MA/Flora/FloraNameStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraNameStorage)
namespace MA::Flora {
struct FloraNameStorage_Entry;
}
namespace MA::Flora {
struct FloraNameStorage_State;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
// Forward declare root types
namespace MA::Flora {
struct FloraNameStorage;
}
namespace MA::Flora {
struct FloraNameStorage_Entry;
}
namespace MA::Flora {
struct FloraNameStorage_State;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraNameStorage);
MARK_VAL_T(::MA::Flora::FloraNameStorage_Entry);
MARK_VAL_T(::MA::Flora::FloraNameStorage_State);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraNameStorage, "MA.Flora", "FloraNameStorage");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraNameStorage_Entry, "MA.Flora", "FloraNameStorage/Entry");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraNameStorage_State, "MA.Flora", "FloraNameStorage/State");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraNameStorage/Entry
struct CORDL_TYPE FloraNameStorage_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraNameStorage_Entry() ;

// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraNameStorage_Entry(int32_t  Offset, int32_t  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Offset, offset: 0x0, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Length, offset: 0x4, size: 0x4, def value: None
 int32_t  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraNameStorage_Entry, Offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_Entry, Length) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraNameStorage_Entry) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraNameStorage::Entry, Unity.Collections.FixedString512Bytes, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey, TValue>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraNameStorage/State
struct CORDL_TYPE FloraNameStorage_State {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraNameStorage_State() ;

// Ctor Parameters [CppParam { name: "Initialized", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "HasLoggedError", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Entry", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::FloraNameStorage_Entry>", modifiers: "", def_value: None }, CppParam { name: "Hash", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "Chars", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Entries", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "KMaxEntriesMsg", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: None }]
constexpr FloraNameStorage_State(uint8_t  Initialized, uint8_t  HasLoggedError, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  Buffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::FloraNameStorage_Entry>  Entry, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<int32_t,int32_t>  Hash, int32_t  Chars, int32_t  Entries, ::Unity::Collections::FixedString512Bytes  KMaxEntriesMsg) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x250};

/// @brief Field Initialized, offset: 0x0, size: 0x1, def value: None
 uint8_t  Initialized;

/// @brief Field HasLoggedError, offset: 0x1, size: 0x1, def value: None
 uint8_t  HasLoggedError;

/// @brief Field Buffer, offset: 0x8, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  Buffer;

/// @brief Field Entry, offset: 0x20, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::FloraNameStorage_Entry>  Entry;

/// @brief Field Hash, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<int32_t,int32_t>  Hash;

/// @brief Field Chars, offset: 0x48, size: 0x4, def value: None
 int32_t  Chars;

/// @brief Field Entries, offset: 0x4c, size: 0x4, def value: None
 int32_t  Entries;

/// @brief Field KMaxEntriesMsg, offset: 0x50, size: 0x200, def value: None
 ::Unity::Collections::FixedString512Bytes  KMaxEntriesMsg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Initialized) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, HasLoggedError) == 0x1, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Buffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Entry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Hash) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Chars) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, Entries) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraNameStorage_State, KMaxEntriesMsg) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraNameStorage_State) == 0x250, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraNameStorage::State, Unity.Burst.SharedStatic`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraNameStorage
#pragma pack(push, 0)
struct CORDL_TYPE FloraNameStorage {
public:
// Declarations
using Entry = ::MA::Flora::FloraNameStorage_Entry;

using State = ::MA::Flora::FloraNameStorage_State;

/// @brief Field SharedState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SharedState, put=setStaticF_SharedState)) ::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>  SharedState;

/// @brief Method Clear, addr 0x18147cee0, size 0x90, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method Contains, addr 0x18147cf70, size 0x90, virtual false, abstract: false, final false
static inline bool Contains(::StringW  value) ;

/// @brief Method Contains, addr 0x18147d000, size 0x60, virtual false, abstract: false, final false
static inline bool Contains(::by_ref<::Unity::Collections::FixedString64Bytes>  value) ;

/// @brief Method GetFixedString, addr 0x18147d060, size 0xb0, virtual false, abstract: false, final false
static inline void GetFixedString(int32_t  index, ::by_ref<::Unity::Collections::FixedString64Bytes>  temp) ;

/// @brief Method GetIndexFromHashAndFixedString, addr 0x18147d110, size 0x160, virtual false, abstract: false, final false
static inline int32_t GetIndexFromHashAndFixedString(int32_t  hash, ::by_ref<::Unity::Collections::FixedString64Bytes>  fixedString) ;

/// @brief Method GetOrCreateIndex, addr 0x18147d270, size 0x1f0, virtual false, abstract: false, final false
static inline int32_t GetOrCreateIndex(::by_ref<::Unity::Collections::FixedString64Bytes>  value) ;

/// @brief Method Initialize, addr 0x18147d460, size 0x390, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method Shutdown, addr 0x18147d7f0, size 0xc0, virtual false, abstract: false, final false
static inline void Shutdown() ;

static inline ::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State> getStaticF_SharedState() ;

/// @brief Method get_Entries, addr 0x18147d8f0, size 0x30, virtual false, abstract: false, final false
static inline int32_t get_Entries() ;

static inline void setStaticF_SharedState(::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloraNameStorage() ;

/// @brief Field ErrorExceedMaxEntryCapacity offset 0xffffffff size 0x4
static constexpr int32_t  ErrorExceedMaxEntryCapacity{static_cast<int32_t>(0xffffffff)};

/// @brief Field InstanceNameMaxLengthBytes offset 0xffffffff size 0x4
static constexpr int32_t  InstanceNameMaxLengthBytes{static_cast<int32_t>(0x3d)};

/// @brief Field MaxChars offset 0xffffffff size 0x4
static constexpr int32_t  MaxChars{static_cast<int32_t>(0x100000)};

/// @brief Field MaxEntries offset 0xffffffff size 0x4
static constexpr int32_t  MaxEntries{static_cast<int32_t>(0x4000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraNameStorage) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora

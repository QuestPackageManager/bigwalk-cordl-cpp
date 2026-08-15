#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioLog_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioLogger)
namespace GlobalNamespace {
struct AudioLog;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLogger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioLogger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLogger*, "", "AudioLogger");
// Dependencies AudioLog, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioLogger
class CORDL_TYPE AudioLogger : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_Item)) ::GlobalNamespace::AudioLog  Item[];

 __declspec(property(get=get_Recording, put=set_Recording)) bool  Recording;

 __declspec(property(get=get_Size)) int32_t  Size;

 __declspec(property(get=get_TotalAdded)) int32_t  TotalAdded;

/// @brief Field <Recording>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__Recording_k__BackingField, put=__cordl_internal_set__Recording_k__BackingField)) bool  _Recording_k__BackingField;

/// @brief Field _count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _first, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__first, put=__cordl_internal_set__first)) int32_t  _first;

/// @brief Field _logs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__logs, put=__cordl_internal_set__logs)) ::ArrayW<::GlobalNamespace::AudioLog>  _logs;

/// @brief Field _size, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Field _totalAdded, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalAdded, put=__cordl_internal_set__totalAdded)) int32_t  _totalAdded;

/// @brief Method Add, addr 0x18047cc30, size 0xe0, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::AudioLog  log) ;

/// @brief Method Clear, addr 0x18047cd10, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetIndex, addr 0x18047cd50, size 0x10, virtual false, abstract: false, final false
inline int32_t GetIndex(int32_t  i) ;

static inline ::GlobalNamespace::AudioLogger* New_ctor(int32_t  size) ;

constexpr bool const& __cordl_internal_get__Recording_k__BackingField() const;

constexpr bool& __cordl_internal_get__Recording_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr int32_t const& __cordl_internal_get__first() const;

constexpr int32_t& __cordl_internal_get__first() ;

constexpr ::ArrayW<::GlobalNamespace::AudioLog> const& __cordl_internal_get__logs() const;

constexpr ::ArrayW<::GlobalNamespace::AudioLog>& __cordl_internal_get__logs() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr int32_t const& __cordl_internal_get__totalAdded() const;

constexpr int32_t& __cordl_internal_get__totalAdded() ;

constexpr void __cordl_internal_set__Recording_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__first(int32_t  value) ;

constexpr void __cordl_internal_set__logs(::ArrayW<::GlobalNamespace::AudioLog>  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

constexpr void __cordl_internal_set__totalAdded(int32_t  value) ;

/// @brief Method .ctor, addr 0x18047cd60, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Count, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsFull, addr 0x18047cda0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFull() ;

/// @brief Method get_Item, addr 0x18047cdb0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioLog get_Item(int32_t  i) ;

/// @brief Method get_Recording, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_Recording() ;

/// @brief Method get_Size, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Size() ;

/// @brief Method get_TotalAdded, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_TotalAdded() ;

/// @brief Method set_Recording, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_Recording(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLogger(AudioLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLogger(AudioLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17493};

/// @brief Field _logs, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioLog>  ____logs;

/// @brief Field _size, offset: 0x18, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _first, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____first;

/// @brief Field _count, offset: 0x20, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _totalAdded, offset: 0x24, size: 0x4, def value: None
 int32_t  ____totalAdded;

/// @brief Field <Recording>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____Recording_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLogger, ____logs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLogger, ____size) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLogger, ____first) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLogger, ____count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLogger, ____totalAdded) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLogger, ____Recording_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLogger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

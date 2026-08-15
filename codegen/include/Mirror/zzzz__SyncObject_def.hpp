#pragma once
// IWYU pragma private; include "Mirror/SyncObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SyncObject)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
class SyncObject___c;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Mirror {
class SyncObject;
}
namespace Mirror {
class SyncObject___c;
}
// Write type traits
MARK_REF_T(::Mirror::SyncObject*);
MARK_REF_T(::Mirror::SyncObject___c*);
DEFINE_IL2CPP_CLASS(::Mirror::SyncObject*, "Mirror", "SyncObject");
DEFINE_IL2CPP_CLASS(::Mirror::SyncObject___c*, "Mirror", "SyncObject/<>c");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SyncObject/<>c
class CORDL_TYPE SyncObject___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Mirror::SyncObject___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_1<bool>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Func_1<bool>*  __9__9_1;

static inline ::Mirror::SyncObject___c* New_ctor() ;

/// @brief Method <.ctor>b__9_0, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool __ctor_b__9_0() ;

/// @brief Method <.ctor>b__9_1, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool __ctor_b__9_1() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Mirror::SyncObject___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__9_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__9_1() ;

static inline void setStaticF___9(::Mirror::SyncObject___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__9_1(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncObject___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncObject___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncObject___c(SyncObject___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncObject___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncObject___c(SyncObject___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SyncObject___c) == 0x10, "Size mismatch!");

} // namespace end def Mirror
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.SyncObject
class CORDL_TYPE SyncObject : public ::System::Object {
public:
// Declarations
using __c = ::Mirror::SyncObject___c;

/// @brief Field IsRecording, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsRecording, put=__cordl_internal_set_IsRecording)) ::System::Func_1<bool>*  IsRecording;

/// @brief Field IsWritable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsWritable, put=__cordl_internal_set_IsWritable)) ::System::Func_1<bool>*  IsWritable;

/// @brief Field OnDirty, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDirty, put=__cordl_internal_set_OnDirty)) ::System::Action*  OnDirty;

/// @brief Method ClearChanges, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearChanges() ;

static inline ::Mirror::SyncObject* New_ctor() ;

/// @brief Method OnDeserializeAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeAll(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnDeserializeDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeDelta(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnSerializeAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeAll(::Mirror::NetworkWriter*  writer) ;

/// @brief Method OnSerializeDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeDelta(::Mirror::NetworkWriter*  writer) ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_IsRecording() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_IsRecording() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_IsWritable() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_IsWritable() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDirty() const;

constexpr ::System::Action*& __cordl_internal_get_OnDirty() ;

constexpr void __cordl_internal_set_IsRecording(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_IsWritable(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnDirty(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x181598450, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncObject(SyncObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncObject(SyncObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18368};

/// @brief Field OnDirty, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___OnDirty;

/// @brief Field IsRecording, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___IsRecording;

/// @brief Field IsWritable, offset: 0x20, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___IsWritable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::SyncObject, ___OnDirty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::SyncObject, ___IsRecording) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::SyncObject, ___IsWritable) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::SyncObject) == 0x28, "Size mismatch!");

} // namespace end def Mirror

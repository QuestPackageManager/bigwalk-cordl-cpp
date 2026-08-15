#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/TransferBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransferBuffer_1)
namespace Dissonance {
class Log;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::TransferBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::TransferBuffer_1, "Dissonance.Datastructures", "TransferBuffer`1");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.TransferBuffer`1<T>
class CORDL_TYPE TransferBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_EstimatedUnreadCount)) int32_t  EstimatedUnreadCount;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<T>  _buffer;

/// @brief Field _readHead, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__readHead, put=__cordl_internal_set__readHead)) int32_t  _readHead;

/// @brief Field _singleReadItem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__singleReadItem, put=__cordl_internal_set__singleReadItem)) ::ArrayW<T>  _singleReadItem;

/// @brief Field _singleWriteItem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__singleWriteItem, put=__cordl_internal_set__singleWriteItem)) ::ArrayW<T>  _singleWriteItem;

/// @brief Field _unread, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__unread, put=__cordl_internal_set__unread)) int32_t  _unread;

/// @brief Field _writeHead, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__writeHead, put=__cordl_internal_set__writeHead)) int32_t  _writeHead;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Dissonance::Datastructures::TransferBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Read(::ArrayW<T>  data) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Read(::ArrayW<T>  data, int32_t  readCount) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Read(::System::ArraySegment_1<T>  data) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Read(::by_ref<T>  item) ;

/// @brief Method TryWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryWrite(T  item) ;

/// @brief Method TryWriteAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryWriteAll(::System::ArraySegment_1<T>  data) ;

/// @brief Method WriteSome, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t WriteSome(::System::ArraySegment_1<T>  data) ;

constexpr ::ArrayW<T> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__readHead() const;

constexpr int32_t& __cordl_internal_get__readHead() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__singleReadItem() const;

constexpr ::ArrayW<T>& __cordl_internal_get__singleReadItem() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__singleWriteItem() const;

constexpr ::ArrayW<T>& __cordl_internal_get__singleWriteItem() ;

constexpr int32_t const& __cordl_internal_get__unread() const;

constexpr int32_t& __cordl_internal_get__unread() ;

constexpr int32_t const& __cordl_internal_get__writeHead() const;

constexpr int32_t& __cordl_internal_get__writeHead() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__readHead(int32_t  value) ;

constexpr void __cordl_internal_set__singleReadItem(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__singleWriteItem(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__unread(int32_t  value) ;

constexpr void __cordl_internal_set__writeHead(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_EstimatedUnreadCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_EstimatedUnreadCount() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferBuffer_1(TransferBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferBuffer_1(TransferBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16942};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____buffer;

/// @brief Field _readHead, offset: 0x18, size: 0x4, def value: None
 int32_t  ____readHead;

/// @brief Field _unread, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____unread;

/// @brief Field _writeHead, offset: 0x20, size: 0x4, def value: None
 int32_t  ____writeHead;

/// @brief Field _singleReadItem, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<T>  ____singleReadItem;

/// @brief Field _singleWriteItem, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<T>  ____singleWriteItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures

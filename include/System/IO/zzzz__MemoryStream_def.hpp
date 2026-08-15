#pragma once
// IWYU pragma private; include "System/IO/MemoryStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO {
class MemoryStream;
}
// Write type traits
MARK_REF_T(::System::IO::MemoryStream*);
DEFINE_IL2CPP_CLASS(::System::IO::MemoryStream*, "System.IO", "MemoryStream");
// Dependencies System.IO.Stream
namespace System::IO {
// Is value type: false
// CS Name: System.IO.MemoryStream
class CORDL_TYPE MemoryStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Capacity, put=set_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _buffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _capacity, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) int32_t  _capacity;

/// @brief Field _expandable, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__expandable, put=__cordl_internal_set__expandable)) bool  _expandable;

/// @brief Field _exposable, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__exposable, put=__cordl_internal_set__exposable)) bool  _exposable;

/// @brief Field _isOpen, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOpen, put=__cordl_internal_set__isOpen)) bool  _isOpen;

/// @brief Field _lastReadTask, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReadTask, put=__cordl_internal_set__lastReadTask)) ::System::Threading::Tasks::Task_1<int32_t>*  _lastReadTask;

/// @brief Field _length, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) int32_t  _length;

/// @brief Field _origin, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__origin, put=__cordl_internal_set__origin)) int32_t  _origin;

/// @brief Field _position, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int32_t  _position;

/// @brief Field _writable, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__writable, put=__cordl_internal_set__writable)) bool  _writable;

/// @brief Method Dispose, addr 0x1816d68c0, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EnsureCapacity, addr 0x1816d6900, size 0xb0, virtual false, abstract: false, final false
inline bool EnsureCapacity(int32_t  value) ;

/// @brief Method EnsureNotClosed, addr 0x1816d69b0, size 0x30, virtual false, abstract: false, final false
inline void EnsureNotClosed() ;

/// @brief Method EnsureWriteable, addr 0x1816d69e0, size 0x40, virtual false, abstract: false, final false
inline void EnsureWriteable() ;

/// @brief Method Flush, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0x1816d6a20, size 0x90, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetBuffer, addr 0x1816d6ab0, size 0x60, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetBuffer() ;

/// @brief Method InternalEmulateRead, addr 0x1816d6b10, size 0x40, virtual false, abstract: false, final false
inline int32_t InternalEmulateRead(int32_t  count) ;

/// @brief Method InternalGetBuffer, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> InternalGetBuffer() ;

/// @brief Method InternalGetPosition, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline int32_t InternalGetPosition() ;

/// @brief Method InternalReadInt32, addr 0x1816d6b50, size 0x90, virtual false, abstract: false, final false
inline int32_t InternalReadInt32() ;

static inline ::System::IO::MemoryStream* New_ctor() ;

static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t>  buffer) ;

static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count, bool  writable, bool  publiclyVisible) ;

static inline ::System::IO::MemoryStream* New_ctor(::ArrayW<uint8_t>  buffer, bool  writable) ;

static inline ::System::IO::MemoryStream* New_ctor(int32_t  capacity) ;

/// @brief Method Read, addr 0x1816d6f70, size 0x150, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Read, addr 0x1816d70c0, size 0x160, virtual true, abstract: false, final false
inline int32_t Read(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method ReadAsync, addr 0x1816d6dd0, size 0x150, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0x1816d6be0, size 0x1f0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadByte, addr 0x1816d6f20, size 0x50, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0x1816d7220, size 0x1a0, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  loc) ;

/// @brief Method SetLength, addr 0x1816d73c0, size 0xc0, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ToArray, addr 0x1816d7480, size 0xa0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method Write, addr 0x1816d7a90, size 0x210, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0x1816d78c0, size 0x1d0, virtual true, abstract: false, final false
inline void Write(::System::ReadOnlySpan_1<uint8_t>  buffer) ;

/// @brief Method WriteAsync, addr 0x1816d76c0, size 0x120, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsync, addr 0x1816d7520, size 0x1a0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteByte, addr 0x1816d77e0, size 0xe0, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__capacity() const;

constexpr int32_t& __cordl_internal_get__capacity() ;

constexpr bool const& __cordl_internal_get__expandable() const;

constexpr bool& __cordl_internal_get__expandable() ;

constexpr bool const& __cordl_internal_get__exposable() const;

constexpr bool& __cordl_internal_get__exposable() ;

constexpr bool const& __cordl_internal_get__isOpen() const;

constexpr bool& __cordl_internal_get__isOpen() ;

constexpr ::System::Threading::Tasks::Task_1<int32_t>* const& __cordl_internal_get__lastReadTask() const;

constexpr ::System::Threading::Tasks::Task_1<int32_t>*& __cordl_internal_get__lastReadTask() ;

constexpr int32_t const& __cordl_internal_get__length() const;

constexpr int32_t& __cordl_internal_get__length() ;

constexpr int32_t const& __cordl_internal_get__origin() const;

constexpr int32_t& __cordl_internal_get__origin() ;

constexpr int32_t const& __cordl_internal_get__position() const;

constexpr int32_t& __cordl_internal_get__position() ;

constexpr bool const& __cordl_internal_get__writable() const;

constexpr bool& __cordl_internal_get__writable() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__capacity(int32_t  value) ;

constexpr void __cordl_internal_set__expandable(bool  value) ;

constexpr void __cordl_internal_set__exposable(bool  value) ;

constexpr void __cordl_internal_set__isOpen(bool  value) ;

constexpr void __cordl_internal_set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__length(int32_t  value) ;

constexpr void __cordl_internal_set__origin(int32_t  value) ;

constexpr void __cordl_internal_set__position(int32_t  value) ;

constexpr void __cordl_internal_set__writable(bool  value) ;

/// @brief Method .ctor, addr 0x1816d7f20, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1816d7ec0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer) ;

/// @brief Method .ctor, addr 0x1816d7ca0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method .ctor, addr 0x1816d7d70, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count, bool  writable, bool  publiclyVisible) ;

/// @brief Method .ctor, addr 0x1816d7e50, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  buffer, bool  writable) ;

/// @brief Method .ctor, addr 0x1816d7f80, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_CanRead, addr 0x1816d8020, size 0x10, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x1816d8020, size 0x10, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x180391c80, size 0x10, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Capacity, addr 0x1816d8030, size 0x30, virtual true, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Length, addr 0x1816d8060, size 0x30, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x1816d8090, size 0x30, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Capacity, addr 0x1816d80c0, size 0x110, virtual true, abstract: false, final false
inline void set_Capacity(int32_t  value) ;

/// @brief Method set_Position, addr 0x1816d81d0, size 0x70, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryStream(MemoryStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryStream(MemoryStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1606};

/// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _origin, offset: 0x30, size: 0x4, def value: None
 int32_t  ____origin;

/// @brief Field _position, offset: 0x34, size: 0x4, def value: None
 int32_t  ____position;

/// @brief Field _length, offset: 0x38, size: 0x4, def value: None
 int32_t  ____length;

/// @brief Field _capacity, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____capacity;

/// @brief Field _expandable, offset: 0x40, size: 0x1, def value: None
 bool  ____expandable;

/// @brief Field _writable, offset: 0x41, size: 0x1, def value: None
 bool  ____writable;

/// @brief Field _exposable, offset: 0x42, size: 0x1, def value: None
 bool  ____exposable;

/// @brief Field _isOpen, offset: 0x43, size: 0x1, def value: None
 bool  ____isOpen;

/// @brief Field _lastReadTask, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<int32_t>*  ____lastReadTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::MemoryStream, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____origin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____position) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____length) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____capacity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____expandable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____writable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____exposable) == 0x42, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____isOpen) == 0x43, "Offset mismatch!");

static_assert(offsetof(::System::IO::MemoryStream, ____lastReadTask) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::IO::MemoryStream) == 0x50, "Size mismatch!");

} // namespace end def System::IO

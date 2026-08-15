#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLock.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Threading/zzzz__LockQueue_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18176efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::Finalize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18176edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                    {::i2c::class_of<::System::Threading::ReaderWriterLock*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireWriterLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t)>(&::System::Threading::ReaderWriterLock::AcquireWriterLock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18176edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"AcquireWriterLock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.AcquireWriterLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t, int32_t)>(&::System::Threading::ReaderWriterLock::AcquireWriterLock)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18176ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"AcquireWriterLock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseWriterLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::ReleaseWriterLock)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18176ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"ReleaseWriterLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.ReleaseWriterLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterLock::*)(int32_t)>(&::System::Threading::ReaderWriterLock::ReleaseWriterLock)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18176ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"ReleaseWriterLock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLock.HasWriterLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ReaderWriterLock::*)()>(&::System::Threading::ReaderWriterLock::HasWriterLock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18176ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"HasWriterLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::ReaderWriterLock::__cordl_internal_get_seq_num()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seq_num;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__cordl_internal_get_seq_num() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seq_num;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_seq_num(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seq_num = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__cordl_internal_get_readers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readers;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__cordl_internal_get_readers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readers;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_readers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readers = value;
}
constexpr int32_t& System::Threading::ReaderWriterLock::__cordl_internal_get_writer_lock_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer_lock_owner;
}
constexpr int32_t const& System::Threading::ReaderWriterLock::__cordl_internal_get_writer_lock_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer_lock_owner;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_writer_lock_owner(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer_lock_owner = value;
}
constexpr ::System::Threading::LockQueue*& System::Threading::ReaderWriterLock::__cordl_internal_get_writer_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer_queue;
}
constexpr ::System::Threading::LockQueue* const& System::Threading::ReaderWriterLock::__cordl_internal_get_writer_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer_queue;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_writer_queue(::System::Threading::LockQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer_queue = value;
}
constexpr ::System::Collections::Hashtable*& System::Threading::ReaderWriterLock::__cordl_internal_get_reader_locks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader_locks;
}
constexpr ::System::Collections::Hashtable* const& System::Threading::ReaderWriterLock::__cordl_internal_get_reader_locks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader_locks;
}
constexpr void System::Threading::ReaderWriterLock::__cordl_internal_set_reader_locks(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader_locks = value;
}
inline void System::Threading::ReaderWriterLock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::ReaderWriterLock*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::AcquireWriterLock(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"AcquireWriterLock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::ReaderWriterLock::AcquireWriterLock(int32_t  millisecondsTimeout, int32_t  initialLockCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"AcquireWriterLock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, millisecondsTimeout, initialLockCount);
}
inline void System::Threading::ReaderWriterLock::ReleaseWriterLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"ReleaseWriterLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLock::ReleaseWriterLock(int32_t  releaseCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"ReleaseWriterLock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releaseCount);
}
inline bool System::Threading::ReaderWriterLock::HasWriterLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::ReaderWriterLock*>(),
                        {"HasWriterLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::ReaderWriterLock* System::Threading::ReaderWriterLock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ReaderWriterLock*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterLock::ReaderWriterLock()   {
}

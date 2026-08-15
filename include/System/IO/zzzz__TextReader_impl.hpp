#pragma once
// IWYU pragma private; include "System/IO/TextReader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextReader_NullTextReader_def.hpp"
#include "System/IO/zzzz__TextReader_SyncTextReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::IO::TextReader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader___c::*)()>(&::System::IO::TextReader___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader___c._ReadAsyncInternal_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::TextReader___c::*)(::System::Object*)>(&::System::IO::TextReader___c::_ReadAsyncInternal_b__17_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816e1ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader___c*>(),
                        {"<ReadAsyncInternal>b__17_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::TextReader___c::setStaticF___9(::System::IO::TextReader___c*  value)  {
::cordl_internals::setStaticField<::System::IO::TextReader___c*, "<>9", ::System::IO::TextReader___c*>(std::forward<::System::IO::TextReader___c*>(value));
}
inline ::System::IO::TextReader___c* System::IO::TextReader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::TextReader___c*, "<>9", ::System::IO::TextReader___c*>();
}
inline void System::IO::TextReader___c::setStaticF___9__17_0(::System::Func_2<::System::Object*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__17_0", ::System::IO::TextReader___c*>(std::forward<::System::Func_2<::System::Object*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Object*,int32_t>* System::IO::TextReader___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__17_0", ::System::IO::TextReader___c*>();
}
inline void System::IO::TextReader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::IO::TextReader___c::_ReadAsyncInternal_b__17_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader___c*>(),
                        {"<ReadAsyncInternal>b__17_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, state);
}
inline ::System::IO::TextReader___c* System::IO::TextReader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::TextReader___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::TextReader___c::TextReader___c()   {
}
//  Writing Method size for method: ::System::IO::TextReader__ReadToEndAsync_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader__ReadToEndAsync_d__14::*)()>(&::System::IO::TextReader__ReadToEndAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x1816e1510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader__ReadToEndAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader__ReadToEndAsync_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader__ReadToEndAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::TextReader__ReadToEndAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader__ReadToEndAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::TextReader__ReadToEndAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader__ReadToEndAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::IO::TextReader__ReadToEndAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader__ReadToEndAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::TextReader__ReadToEndAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::TextReader__ReadToEndAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::TextReader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_chars_5__3", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::TextReader__ReadToEndAsync_d__14::TextReader__ReadToEndAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::TextReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::ArrayW<char16_t>  _chars_5__3, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_sb_5__2 = _sb_5__2;
this->_chars_5__3 = _chars_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::TextReader__ReadToEndAsync_d__14::TextReader__ReadToEndAsync_d__14()   {
}
//  Writing Method size for method: ::System::IO::TextReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816de000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816de000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::TextReader::*)(bool)>(&::System::IO::TextReader::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Peek)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::TextReader::*)()>(&::System::IO::TextReader::Read)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::TextReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::TextReader::Read)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1816de770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::TextReader::*)(::System::Span_1<char16_t>)>(&::System::IO::TextReader::Read)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1816de590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadToEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::TextReader::*)()>(&::System::IO::TextReader::ReadToEnd)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816de4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::TextReader::*)()>(&::System::IO::TextReader::ReadLine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816de310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadToEndAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::IO::TextReader::*)()>(&::System::IO::TextReader::ReadToEndAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816de400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::TextReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::TextReader::ReadAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1816de1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.ReadAsyncInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::TextReader::*)(::System::Memory_1<char16_t>, ::System::Threading::CancellationToken)>(&::System::IO::TextReader::ReadAsyncInternal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1816de030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::TextReader*>(),
                    {::i2c::class_of<::System::IO::TextReader*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::TextReader.Synchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextReader* (*)(::System::IO::TextReader*)>(&::System::IO::TextReader::Synchronized)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816de880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {"Synchronized", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::TextReader::setStaticF_Null(::System::IO::TextReader*  value)  {
::cordl_internals::setStaticField<::System::IO::TextReader*, "Null", ::System::IO::TextReader*>(std::forward<::System::IO::TextReader*>(value));
}
inline ::System::IO::TextReader* System::IO::TextReader::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::System::IO::TextReader*, "Null", ::System::IO::TextReader*>();
}
inline void System::IO::TextReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextReader::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextReader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::TextReader::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::IO::TextReader::Peek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::TextReader::Read()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::TextReader::Read(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::IO::TextReader::Read(::System::Span_1<char16_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline ::StringW System::IO::TextReader::ReadToEnd()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::TextReader::ReadLine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::IO::TextReader::ReadToEndAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::TextReader::ReadAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, index, count);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::TextReader::ReadAsyncInternal(::System::Memory_1<char16_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::TextReader*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::IO::TextReader* System::IO::TextReader::Synchronized(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::TextReader*>(),
                        {"Synchronized", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::TextReader*>(nullptr, ___internal_method, reader);
}
inline ::System::IO::TextReader* System::IO::TextReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::TextReader*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::IO::TextReader::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::TextReader::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::TextReader::TextReader()   {
}

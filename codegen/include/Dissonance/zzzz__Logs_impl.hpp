#pragma once
// IWYU pragma private; include "Dissonance/Logs.hpp"
#include "Dissonance/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__Logs_def.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "Dissonance/zzzz__LogCategory_def.hpp"
#include "Dissonance/zzzz__LogLevel_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__Logs_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Dissonance::Logs_LogMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Logs_LogMessage::*)(::StringW, ::Dissonance::LogLevel)>(&::Dissonance::Logs_LogMessage::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cb650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs_LogMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs_LogMessage.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Logs_LogMessage::*)()>(&::Dissonance::Logs_LogMessage::Log)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cb5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs_LogMessage>(),
                        {"Log", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Logs_LogMessage::_ctor(::StringW  message, ::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs_LogMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, level);
}
inline void Dissonance::Logs_LogMessage::Log()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs_LogMessage>(),
                        {"Log", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_level", ty: "::Dissonance::LogLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Logs_LogMessage::Logs_LogMessage(::Dissonance::LogLevel  _level, ::StringW  _message) noexcept  {
this->_level = _level;
this->_message = _message;
}
// Ctor Parameters []
constexpr ::Dissonance::Logs_LogMessage::Logs_LogMessage()   {
}
//  Writing Method size for method: ::Dissonance::Logs.get_Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Dissonance::Logs::get_Disable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"get_Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.set_Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Dissonance::Logs::set_Disable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"set_Disable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Log* (*)(::Dissonance::LogCategory, ::StringW)>(&::Dissonance::Logs::Create)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805cbec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::LogCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Log* (*)(int32_t, ::StringW)>(&::Dissonance::Logs::Create)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805cbec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Dissonance::LogCategory, ::Dissonance::LogLevel)>(&::Dissonance::Logs::SetLogLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cc150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Dissonance::LogCategory>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Dissonance::LogLevel)>(&::Dissonance::Logs::SetLogLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cc150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.GetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::LogLevel (*)(::Dissonance::LogCategory)>(&::Dissonance::Logs::GetLogLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Dissonance::LogCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.GetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::LogLevel (*)(int32_t)>(&::Dissonance::Logs::GetLogLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805cc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.WriteMultithreadedLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Dissonance::Logs::WriteMultithreadedLogs)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805cc190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"WriteMultithreadedLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Logs.SendLogMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Dissonance::LogLevel)>(&::Dissonance::Logs::SendLogMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805cc040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SendLogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Logs::setStaticF__Disable_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<Disable>k__BackingField", ::Dissonance::Logs*>(std::forward<bool>(value));
}
inline bool Dissonance::Logs::getStaticF__Disable_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<Disable>k__BackingField", ::Dissonance::Logs*>();
}
inline void Dissonance::Logs::setStaticF_LogsFromOtherThreads(::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*, "LogsFromOtherThreads", ::Dissonance::Logs*>(std::forward<::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*>(value));
}
inline ::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>* Dissonance::Logs::getStaticF_LogsFromOtherThreads()  {
return ::cordl_internals::getStaticField<::Dissonance::Datastructures::TransferBuffer_1<::Dissonance::Logs_LogMessage>*, "LogsFromOtherThreads", ::Dissonance::Logs*>();
}
inline void Dissonance::Logs::setStaticF__main(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "_main", ::Dissonance::Logs*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* Dissonance::Logs::getStaticF__main()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "_main", ::Dissonance::Logs*>();
}
inline bool Dissonance::Logs::get_Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"get_Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Dissonance::Logs::set_Disable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"set_Disable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Dissonance::Log* Dissonance::Logs::Create(::Dissonance::LogCategory  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::LogCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Log*>(nullptr, ___internal_method, category, name);
}
inline ::Dissonance::Log* Dissonance::Logs::Create(int32_t  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Log*>(nullptr, ___internal_method, category, name);
}
inline void Dissonance::Logs::SetLogLevel(::Dissonance::LogCategory  category, ::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Dissonance::LogCategory>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, level);
}
inline void Dissonance::Logs::SetLogLevel(int32_t  category, ::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, level);
}
inline ::Dissonance::LogLevel Dissonance::Logs::GetLogLevel(::Dissonance::LogCategory  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Dissonance::LogCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::LogLevel>(nullptr, ___internal_method, category);
}
inline ::Dissonance::LogLevel Dissonance::Logs::GetLogLevel(int32_t  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::LogLevel>(nullptr, ___internal_method, category);
}
inline void Dissonance::Logs::WriteMultithreadedLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"WriteMultithreadedLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Dissonance::Logs::SendLogMessage(::StringW  message, ::Dissonance::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Logs*>(),
                        {"SendLogMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, level);
}
// Ctor Parameters []
constexpr ::Dissonance::Logs::Logs()   {
}

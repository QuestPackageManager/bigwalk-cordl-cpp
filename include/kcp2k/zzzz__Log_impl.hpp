#pragma once
// IWYU pragma private; include "kcp2k/Log.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Log_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
inline void kcp2k::Log::setStaticF_Info(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "Info", ::kcp2k::Log*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* kcp2k::Log::getStaticF_Info()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "Info", ::kcp2k::Log*>();
}
inline void kcp2k::Log::setStaticF_Warning(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "Warning", ::kcp2k::Log*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* kcp2k::Log::getStaticF_Warning()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "Warning", ::kcp2k::Log*>();
}
inline void kcp2k::Log::setStaticF_Error(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "Error", ::kcp2k::Log*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* kcp2k::Log::getStaticF_Error()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "Error", ::kcp2k::Log*>();
}
// Ctor Parameters []
constexpr ::kcp2k::Log::Log()   {
}
